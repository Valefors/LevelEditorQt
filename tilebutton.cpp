#include "tilebutton.h"

tileButton::tileButton(QWidget *parent): QPushButton(parent)
{
    setFixedSize(SIZE_TILE);
    setIcon(QIcon(EMPTY_ICON_PATH));
    setIconSize(SIZE_TILE);
}

void tileButton::setGrassMode()
{
    setIcon(QIcon(GRASS_ICON_PATH));
    type = TILE_TYPE::GRASS;
}

void tileButton::setRockMode()
{
    setIcon(QIcon(ROCK_ICON_PATH));
    type = TILE_TYPE::ROCK;
}

void tileButton::setEmptyMode()
{
    setIcon(QIcon(EMPTY_ICON_PATH));
    type = TILE_TYPE::EMPTY;
}
