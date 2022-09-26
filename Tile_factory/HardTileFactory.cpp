#include "HardTileFactory.h"

Tile* HardTileFactory::createTile(TileType type){
    switch(type){
        case TileType::BorderColumn:
            new BorderColumn(new TileStats{0, 0, 0, 0, 0, 0,"|"});
            break;
        case TileType::BorderRow:
            new BorderRow(new TileStats{0,0,0,0,0,0,"-"});
            break;
        case TileType::MyCity:
            new MyCity(new TileStats{0,0,0,0,0,0,"H"},new Army());
            break;
        case TileType::EnemyVillage:
            new EnemyVillage(new TileStats{100,100,100,150,150,1000,"E"});
            break;
        case TileType::Resources:
            new Resources(new TileStats{20,20,10,0,0,0,"R"});
            break;
        case TileType::Treasure:
            return new Treasure(new TileStats{0,0,0,0,0,50,"$"});
            break;
        case TileType::EnemyTileWolf:
            new EnemyTile(new TileStats{0,0,0,30,40,20,"e"}, EnemyTile::EnemyType::Wolf);
            break;
        case TileType::EnemyTileBarbarians:
            new EnemyTile(new TileStats{0,0,0,30,40,20,"e"}, EnemyTile::EnemyType::Barbarians);
            break;
        case TileType::EnemyTileDaemon:
            new EnemyTile(new TileStats{0,0,0,30,40,20,"e"}, EnemyTile::EnemyType::Daemon);
            break;
        default:
            std::cerr << "Wrong tile-name. Tile names are the same as class names of tiles." << std::endl;
            break;
    }
}
