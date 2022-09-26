#ifndef CITYBUILDER_GAME_ENEMYVILLAGE_H
#define CITYBUILDER_GAME_ENEMYVILLAGE_H

#include "Tile.h"

class EnemyVillage: public Tile {
    TileStats* m_tileStats;
public:
    EnemyVillage(TileStats* tileStats);
    std::string getAppearance() override;

};

#endif //CITYBUILDER_GAME_ENEMYVILLAGE_H
