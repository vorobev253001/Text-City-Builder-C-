#ifndef CITYBUILDER_GAME_MYCITY_H
#define CITYBUILDER_GAME_MYCITY_H

#include "../Army.h"
#include "Tile.h"

class MyCity: public Tile {
    TileStats* m_tileStats;
public:
    MyCity(TileStats* tileStats, Army* army);
    std::string getAppearance() override;
};


#endif //CITYBUILDER_GAME_MYCITY_H
