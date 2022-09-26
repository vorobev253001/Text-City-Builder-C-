#ifndef CITYBUILDER_GAME_BORDERCOLUMN_H
#define CITYBUILDER_GAME_BORDERCOLUMN_H

#include "Tile.h"

class BorderColumn: public Tile {
    TileStats* m_tileStats;
public:
    BorderColumn(TileStats* tileStats);
    std::string getAppearance() override;
};


#endif //CITYBUILDER_GAME_BORDERCOLUMN_H
