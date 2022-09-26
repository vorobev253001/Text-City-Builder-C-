#ifndef CITYBUILDER_GAME_HARDTILEFACTORY_H
#define CITYBUILDER_GAME_HARDTILEFACTORY_H
#include "BorderColumn.h"
#include "TileFactory.h"
#include "BorderRow.h"
#include "MyCity.h"
#include "Tile.h"
#include "EnemyTile.h"
#include "EnemyVillage.h"
#include "Resources.h"
#include "Treasure.h"
#include "../Engine.h"
#include "../Enemy_factory/HardEnemyFactory/HardEnemyFactory.h"
#include "../Enemy_factory/EnemyFactory.h"


class HardTileFactory: public TileFactory{
    Tile* createTile(TileType type)override;
};


#endif //CITYBUILDER_GAME_HARDTILEFACTORY_H
