#ifndef CITYBUILDER_GAME_EASYTILEFACTORY_H
#define CITYBUILDER_GAME_EASYTILEFACTORY_H
#include "BorderColumn.h"
#include "TileFactory.h"
#include "BorderRow.h"
#include "MyCity.h"
#include "Tile.h"
#include "EnemyTile.h"
#include "EnemyVillage.h"
#include "Resources.h"
#include "Treasure.h"

class EasyTileFactory: public TileFactory{
public:
    Tile* createTile(TileType type) override;
};


#endif //CITYBUILDER_GAME_EASYTILEFACTORY_H
