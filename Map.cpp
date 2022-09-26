#include "Map.h"
#include "Tile_factory/EasyTileFactory.h"

bool Map::isNonZero(unsigned int width, unsigned int height){
    if (width == 0) {
        std::cerr << "Map::Map: width must be at least 1" << std::endl;
        return false;
    }

    if (height == 0) {
        std::cerr << "Map::Map: height must be at least 1" << std::endl;
        return false;
    }
    return true;
}


bool Map::isInMap(unsigned int row, unsigned int col){
    if (row >= m_map.size()) { // m_map.size() == height
        std::cout << "Map::isInMap: entered a row value that is too large, "
                  << "maximum is " << m_map.size() - 1 << "\n\n";
        return false;
    }

    if (col >= m_map.size()) { // m_map.at(0).size() == width
        std::cout << "Map::isInMap: entered a column value that is too large, "
                  << "maximum is " << m_map.size() - 1 << "\n\n";
        return false;
    }

    return true;
}

Map::Map(unsigned int width,unsigned int height) {
    if (isNonZero(width, height)) {
for (int i=0; i<height; ++i) {
    std::vector<Tile*> row(width, new Resources((TileStats *) " /."));
    m_map.push_back(row);
}
    } else {
      // std::vector<Tile> row (1, new Resources((TileStats *) "."));
    }
}

/*Tile* Map::getValue(unsigned int row, unsigned int col){
    if (isInMap(row, col)){
        return m_map.at(row).at(col);
    } else {
        return nullptr;
    }
}*/



void Map::setValue(unsigned int row, unsigned int col, TileFactory::TileType tile){
//    if (isInMap(row, col)){
        m_map.at(row).at(col) = reinterpret_cast<Tile *>(tile);
   // }
}

/*void Map::setNewAppearance(unsigned int row, unsigned int col, std::string appearance){
    if (isInMap(row, col)){
        m_map.at(row).at(col)->getAppearance();
    }
}*/




void Map::print(){
    for (std::vector<Tile*> row : m_map) {
        for (Tile* cell : row) {
            std::cout << cell->getAppearance() << "  ";
        }
        std::cout << std::endl;
    }
}


void Map::generateMap(Map* mapObj) {
    // toto vse zabalit do metody generate map, ktera se spusti na zacatku hry
//mapObj = new Map();

//top
   for (int i = 1; i <= 10; ++i) {
       mapObj->setValue(0, i, (EasyTileFactory::TileType::BorderRow));
   }

//bottom
   for (int i = 1; i <= 11; ++i) {
        mapObj->setValue(11,i,(EasyTileFactory::TileType::BorderRow));
    }

//left side
   for (int i = 0; i <= 11; ++i) {
        mapObj->setValue(i,0,(EasyTileFactory::TileType::BorderColumn));
    }

//right side
    for (int i = 0; i <= 11; ++i) {
        mapObj->setValue(i,11,(EasyTileFactory::TileType::BorderColumn));
    }
    //resources
   mapObj->setValue(10, 10, (EasyTileFactory::TileType::Resources) );
    mapObj->setValue(9,7,(EasyTileFactory::TileType::Resources));
    mapObj->setValue(10,3,(EasyTileFactory::TileType::Resources));
    mapObj->setValue(10,1,(EasyTileFactory::TileType::Resources));
    mapObj->setValue(6,4,(EasyTileFactory::TileType::Resources));
    mapObj->setValue(5,7,(EasyTileFactory::TileType::Resources));
    mapObj->setValue(3,2,(EasyTileFactory::TileType::Resources));
    //cities
    mapObj->setValue(1,1,(EasyTileFactory::TileType::EnemyVillage));
    mapObj->setValue(9,9, (EasyTileFactory::TileType::MyCity));
    //enemies
    mapObj->setValue(7,5,(EasyTileFactory::TileType::EnemyTileWolf));
    mapObj->setValue(9,2,(EasyTileFactory::TileType::EnemyTileBarbarians));
    mapObj->setValue(6,8,(EasyTileFactory::TileType::EnemyTileBarbarians));
    mapObj->setValue(5,5,(EasyTileFactory::TileType::EnemyTileDaemon));
    mapObj->setValue(4,8,(EasyTileFactory::TileType::EnemyTileDaemon));
    mapObj->setValue(2,4,(EasyTileFactory::TileType::EnemyTileWolf));
    mapObj->setValue(3,3,(EasyTileFactory::TileType::EnemyTileBarbarians));
    mapObj->setValue(4,4,(EasyTileFactory::TileType::EnemyTileWolf));
    mapObj->setValue(3,1,(EasyTileFactory::TileType::EnemyTileDaemon));
    //treasures
    mapObj->setValue(10,5,(EasyTileFactory::TileType::Treasure));
    mapObj->setValue(7,2,(EasyTileFactory::TileType::Treasure));
    mapObj->setValue(7,10,(EasyTileFactory::TileType::Treasure));
    mapObj->setValue(2,2,(EasyTileFactory::TileType::Treasure));
    mapObj->setValue(2,3,(EasyTileFactory::TileType::Treasure));
    mapObj->setValue(1,8,(EasyTileFactory::TileType::Treasure));
    mapObj->setValue(1,10,(EasyTileFactory::TileType::Treasure));
}
