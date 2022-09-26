#include "MapOptions.h"
#include "Tile_factory/tile.h"

MapOptions::MapOptions():MenuOptions("Map options") {
    m_mapActions.push_back("Print map!");
    m_mapActions.push_back("Create a map!");
    m_mapActions.push_back("Make a move!");
}

void MapOptions::doAction() {
    std::cout << "What would you like to do on the map? \n";
    for (int i = 0; i < m_mapActions.size(); ++i) {
        std::cout << i << "] " << m_mapActions.at(i) << "\n";
    }
    std::cout << std::endl;
    int userInput = 0;
    std::cin >> userInput;
    if (userInput == 0) {
        m_map->print();
    } else if (userInput == 1){
    }
}


