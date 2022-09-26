#ifndef MENU_H_MAP_H
#define MENU_H_MAP_H

#include <vector>
#include <iostream>
#include "Tile_factory/TileFactory.h"


class Map {
    std::vector< std::vector<Tile*> > m_map;
    bool isInMap(unsigned int row, unsigned int col);
    static bool isNonZero(unsigned int width, unsigned int height);
public:
   // Tile* getValue(unsigned int row, unsigned int col);
    void print();
    void generateMap(Map* mapObj);
    Map(unsigned int m_width,unsigned int m_height);
    void setValue(unsigned int row, unsigned int col, TileFactory::TileType tile);
    //void setNewAppearance(unsigned int row, unsigned int col, std::string appearance);
};

#endif //MENU_H_MAP_H
