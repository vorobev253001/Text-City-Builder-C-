#include "Buildings.h"

Buildings::Buildings(std::string description, int price, int gold, int food, int iron, int wood){
    m_description = description;
    m_BuildingPrice = price;
    m_BuildingGold = gold;
    m_BuildingFood = food;
    m_BuildingIron = iron;
    m_BuildingWood = wood;
}

void Buildings::printInfo() {
    std::cout << "This is the building:" << m_description << std::endl;
    std::cout << "Cost of this building is:" << m_BuildingPrice << std::endl;
    std::cout << "This building produce:" << m_BuildingGold << " " << "Gold" << " " << m_BuildingFood << " " << "Food" << std::endl;
}

void Buildings::doAction(){
    /*std::cout << "Buildings : You can do these actions: \n";
    for (int i = 0; i < m_buildingActions.size(); ++i) {
        std::cout << i << "] " << m_buildingActions.at(i) << "\n";
    }
    std::cout << std::endl;
    int userInput = 0;
    std::cin >> userInput;
    if (userInput = 1) {
        printArmyInfo();
    } else if (userInput = 2) {
        std::cout << "print map somehow" << std::endl;
        // printMapForArmy(myMap);   // <<--- toto nevim jak
    } else if (userInput = 3) {
        std::cout <<"Pohyb po mapě" <<std::endl;
    }
*/
}

int Buildings::getBuildingPrice() {
    return m_BuildingPrice;
}

int Buildings::getBuildingGold() {
    return m_BuildingGold;
}

int Buildings::getBuildingFood() {
    return m_BuildingFood;
}

int Buildings::getBuildingIron() {
    return m_BuildingIron;
}

int Buildings::getBuildingWood() {
    return m_BuildingWood;
}

Buildings::Buildings(std::string description, int price, int numberOfSoldiers, int armyStrenght) {
    m_description = description;
    m_BuildingPrice = price;
    m_numberOfSoldiers = numberOfSoldiers;
    m_armyStrenght = armyStrenght;

}

int Buildings::getNumberOfSoldiers() {
    return m_numberOfSoldiers;
}

int Buildings::getArmyStrenght() {
    return m_armyStrenght;
}
