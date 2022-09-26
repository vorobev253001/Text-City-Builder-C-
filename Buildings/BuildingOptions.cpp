#include "BuildingOptions.h"

BuildingOptions::BuildingOptions():MenuOptions("Buildings and resources") {
    m_build = "What would you like to build?";
    m_buildActions.push_back("Market!");
    m_buildActions.push_back("Farm!");
    m_buildActions.push_back("Mine!");
    m_buildActions.push_back("Sawmill!");
    m_buildActions.push_back("Armory!");
    m_buildActions.push_back("Print current resources");
}

void BuildingOptions::doAction() {
    std::cout << "What would you like to build? \n";
    for (int i = 0; i < m_buildActions.size(); ++i) {
        std::cout << i << "] " << m_buildActions.at(i) << "\n";
    }
    std::cout << std::endl;
    int userInput = 0;
    std::cin >> userInput;
    if (userInput == 0) {
        BuildingsDirector* director = new BuildingsDirector(new MarketBuilder());
        Buildings* market = director->createBuilding("Market");
        ResourceMonitoring::addBuilding(market);
    } else if (userInput == 1){
        BuildingsDirector* director = new BuildingsDirector(new FarmBuilder());
        Buildings* farm= director->createBuilding("Farm");
        ResourceMonitoring::addBuilding(farm);
}   else if (userInput == 2){
        BuildingsDirector* director = new BuildingsDirector(new MineBuilder());
        Buildings* mine= director->createBuilding("Mine");
        ResourceMonitoring::addBuilding(mine);
    } else if (userInput == 3){
        BuildingsDirector* director = new BuildingsDirector(new SawmillBuilder());
        Buildings* sawmill= director->createBuilding("Sawmill");
        ResourceMonitoring::addBuilding(sawmill);
    }else if (userInput == 4){
        BuildingsDirector* director = new BuildingsDirector(new ArmoryBuilder());
        Buildings* armory= director->createBuilding("Armory");
        ResourceMonitoring::addBuilding(armory);
    }
    else if (userInput == 5) {
        ResourceMonitoring::printAllInfo();
    }
}

