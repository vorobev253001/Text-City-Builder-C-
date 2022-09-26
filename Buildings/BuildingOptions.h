#ifndef CITYBUILDER_GAME_BUILDINGOPTIONS_H
#define CITYBUILDER_GAME_BUILDINGOPTIONS_H
#include <iostream>
#include "vector"
#include "../MenuOptions.h"
#include "BuildingsDirector.h"
#include "MineBuilder.h"
#include "FarmBuilder.h"
#include "SawmillBuilder.h"
#include "ArmoryBuilder.h"
#include "MarketBuilder.h"
#include "ResourceMonitoring.h"
#include "Buildings.h"

class BuildingOptions: public MenuOptions {
    std::string m_build;
    std::vector<std::string> m_buildActions;

public:
    BuildingOptions();
    void doAction() override;
};


#endif //CITYBUILDER_GAME_BUILDINGOPTIONS_H