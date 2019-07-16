#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QWidget>
#include <QApplication>
#include <QGridLayout>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "tilebutton.h"

namespace Ui {

class Dialog;
}

//Main widget
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();


private slots:
    void updateTiles();

    void on_grassButton_clicked();
    void on_rockButton_clicked();
    void on_empty_tile_clicked();
    void on_saveButton_clicked();
    void on_openButton_clicked();

signals:

private:
    Ui::Dialog *ui;
    QGridLayout *gridLayout; //Grid for the tiles

    void createGrid();

    static const int ROWS  = 5;
    static const int COLUMNS  = 5;
    static const int TILES_NUMBER  = 25;

    tileButton *btnArray[TILES_NUMBER];
    TILE_TYPE tileType = TILE_TYPE::EMPTY;

    //Save part
    const QString SAVE_FILE = "Data.txt";
    const QChar GRASS_SYMBOLE = 'g';
    const QChar ROCK_SYMBOLE = 'r';
    const QChar EMPTY_SYMBOLE = 'e';

};

#endif // DIALOG_H
