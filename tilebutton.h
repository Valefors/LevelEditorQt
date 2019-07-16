#ifndef TILEBUTTON_H
#define TILEBUTTON_H

#include <QPushButton>
#include <QObject>

enum class TILE_TYPE {GRASS, ROCK, EMPTY};

//Class of the level's tiles
class tileButton : public QPushButton
{
    Q_OBJECT

public:
    tileButton(QWidget *parent);
    TILE_TYPE type = TILE_TYPE::EMPTY;

    void setGrassMode();
    void setRockMode();
    void setEmptyMode();

    const QString GRASS_ICON_PATH = "img/grass_tile.png";
    const QString ROCK_ICON_PATH = "img/rock_tile.png";
    const QString EMPTY_ICON_PATH = "img/empty_tile.png";

    const QSize SIZE_TILE = QSize(64,64);
};

#endif // TILEBUTTON_H
