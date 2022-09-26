#ifndef CITYBUILDER_GAME_TREASURE_H
#define CITYBUILDER_GAME_TREASURE_H


#include "Tile.h"

class Treasure: public Tile {
    TileStats* m_tileStats;
public:
    Treasure(TileStats* tileStats);
    std::string getAppearance() override;
};



#endif //CITYBUILDER_GAME_TREASURE_H
