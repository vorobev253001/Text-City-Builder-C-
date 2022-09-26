#ifndef CITYBUILDER_GAME_TILEFACTORY_H
#define CITYBUILDER_GAME_TILEFACTORY_H

#include "Tile.h"
/**
 * Tato tovární metoda vytváří potomky Tile, ty mají podle s_difficulty vytvořenou továrnu(hard/easy), která
 * rozhoduje o urovni monster, jejich staty se upravují na jednom místě a to Easy/HardEnemyFactory.cpp,
 * takže při createTile(type)jenom dát do stringu správný název class potomka na začátku
 * např. createTile(TileType::Treasure)
 */
class TileFactory {
public:
    enum class TileType{
        BorderColumn,BorderRow,MyCity,EnemyVillage,Resources,Treasure,EnemyTileWolf,EnemyTileBarbarians,EnemyTileDaemon
    };
    virtual Tile* createTile(TileType type)=0;
};

#endif //CITYBUILDER_GAME_TILEFACTORY_H
