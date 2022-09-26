#ifndef CITYBUILDER_GAME_RESOURCES_H
#define CITYBUILDER_GAME_RESOURCES_H


#include "Tile.h"

class Resources: public Tile {
    TileStats* m_tileStats;
public:
    Resources(TileStats* tileStats);
    std::string getAppearance() override;
};


#endif //CITYBUILDER_GAME_RESOURCES_H
