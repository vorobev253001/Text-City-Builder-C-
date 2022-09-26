#ifndef CITYBUILDER_GAME_BORDERROW_H
#define CITYBUILDER_GAME_BORDERROW_H

#include "Tile.h"

class BorderRow:public Tile {
    TileStats* m_tileStats;

public:
    BorderRow(TileStats* tileStats);
    std::string getAppearance() override;
};


#endif //CITYBUILDER_GAME_BORDERROW_H
