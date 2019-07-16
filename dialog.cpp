#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
    gridLayout = ui->gridLayout; //Get the mayout created from Qt Designer

    Dialog::createGrid();
}

Dialog::~Dialog()
{
    delete ui;
}

//Add the tiles to the grid layout
void Dialog::createGrid()
{
    /*gridLayout->setColumnMinimumWidth(5, 64);
    gridLayout->setRowMinimumHeight(5,64);*/

    for (int i = 0; i < TILES_NUMBER; i++)
    {
       btnArray[i] = new tileButton(this);
       QObject::connect(btnArray[i], SIGNAL(clicked()), this, SLOT(updateTiles()));
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            gridLayout->addWidget(btnArray[j + i * 5], 0 + i, j);
            gridLayout->setSpacing(0);
        }
    }

}

void Dialog::updateTiles()
{
    tileButton* tile = qobject_cast<tileButton*>(sender());

    if(tile == nullptr) return;

    if(tileType == TILE_TYPE::GRASS)
    {
        tile->setGrassMode();
    }

    if(tileType == TILE_TYPE::ROCK)
    {
        tile->setRockMode();
    }

    if(tileType == TILE_TYPE::EMPTY)
    {
        tile->setEmptyMode();
    }
}

//---- Slots for the Edit buttons (Qt Designer) -----

void Dialog::on_grassButton_clicked()
{
    tileType = TILE_TYPE::GRASS;
}

void Dialog::on_rockButton_clicked()
{
    tileType = TILE_TYPE::ROCK;
}

void Dialog::on_empty_tile_clicked()
{
    tileType = TILE_TYPE::EMPTY;
}

//Save the current level in a "Data.txt" file as a string
void Dialog::on_saveButton_clicked()
{
    QString save = "";
    int arrayLenght = sizeof(btnArray)/sizeof(tileButton*);

    for(int i = 0; i < arrayLenght; i++)
    {
        if(btnArray[i] == nullptr) return;

        switch (btnArray[i]->type)
        {
            case TILE_TYPE::GRASS:
                save.append(GRASS_SYMBOLE);
            break;

            case TILE_TYPE::ROCK:
            save.append(ROCK_SYMBOLE);
            break;

            case TILE_TYPE::EMPTY:
            save.append(EMPTY_SYMBOLE);
            break;

        }
    }

    qDebug() << save;
    QFile file(SAVE_FILE);
    if(file.open(QIODevice::ReadWrite))
    {
        QTextStream stream(&file);
        stream << save << endl;
    }
}

//Open the "Data.txt", read the saved string and file the level's tiles
void Dialog::on_openButton_clicked()
{
    QFile file(SAVE_FILE);

    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        int lineSize = line.length();

        for(int i = 0; i < lineSize; i++)
        {
            qDebug() << line;

            if(line[i] == GRASS_SYMBOLE) btnArray[i]->setGrassMode();
            if(line[i] == ROCK_SYMBOLE) btnArray[i]->setRockMode();
            if(line[i] == EMPTY_SYMBOLE) btnArray[i]->setEmptyMode();
        }
    }
}
