#ifndef CITYBUILDER_GAME_TILE_H
#define CITYBUILDER_GAME_TILE_H
#include <iostream>
#include "TileStats.h"

class Tile {
public:
    Tile(){};
    virtual std::string getAppearance()= 0;
    virtual ~Tile(){};
};


#endif //CITYBUILDER_GAME_TILE_H
