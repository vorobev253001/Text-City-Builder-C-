#ifndef CITYBUILDER_GAME_MAPOPTIONS_H
#define CITYBUILDER_GAME_MAPOPTIONS_H
#include "MenuOptions.h"
#include "vector"
#include "Map.h"
#include "Engine.h"

class MapOptions: public MenuOptions {
    std::vector<std::string> m_mapActions;
    Map* m_map;
public:
    MapOptions();
    void doAction() override;
};


#endif //CITYBUILDER_GAME_MAPOPTIONS_H
