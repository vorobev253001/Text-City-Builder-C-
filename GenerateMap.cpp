#include "GenerateMap.h"
#include "Enemy_factory/EnemyFactory.h"
#include "Tile_factory/TileFactory.h"
#include "Enemy_factory/EasyEnemyFactory/EasyEnemyFactory.h"
#include "Tile_factory/EasyTileFactory.h"
#include "Tile_factory/HardTileFactory.h"

GenerateMap::GenerateMap(){}

void GenerateMap::constructMap() {
    EnemyFactory* m_ef = nullptr;
    TileFactory* m_tf = nullptr;
    switch (Engine::getDifficulty()){
        case 1:
            m_ef = new EasyEnemyFactory();
            m_tf = new EasyTileFactory();
            break;
        case 2:
            m_ef = new HardEnemyFactory();
            m_tf = new HardTileFactory();
            break;
    }
}