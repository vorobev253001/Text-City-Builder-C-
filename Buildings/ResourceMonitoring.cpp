#include "ResourceMonitoring.h"
#include "ArmoryBuilder.h"
#include "../Army.h"

int ResourceMonitoring::m_food = 200;
int ResourceMonitoring::m_gold = 200;
int ResourceMonitoring::m_iron = 200;
int ResourceMonitoring::m_wood = 200;
int ResourceMonitoring::m_armyStrength = 0;
int ResourceMonitoring::m_numberOfSoldiers = 0;


void ResourceMonitoring::addBuilding(Buildings *building) {
    if (m_gold >= building->getBuildingPrice()) {
        m_gold -= building->getBuildingPrice();
        m_gold += building->getBuildingGold();
        m_food += building->getBuildingFood();
        m_iron += building->getBuildingIron();
        m_wood += building->getBuildingWood();
        m_numberOfSoldiers += building->getNumberOfSoldiers();
        m_armyStrength += building->getArmyStrenght();
    } else {
        std::cout << "Not enough gold to build!" << std::endl;
    }
}

void ResourceMonitoring::printAllInfo() {
    std::cout << "-----Resources-----" << std::endl;
    std::cout << "Total gold:" << " " << m_gold << std::endl;
    std::cout << "Total food:" << " " << m_food  << std::endl;
    std::cout << "Total iron:" << " " << m_iron  << std::endl;
    std::cout << "Total wood:" << " " << m_wood  << std::endl;
    std::cout << "Total army strenght:" << " " << g_army->getArmyStrength() << std::endl;
    std::cout << "Current number of soldiers in our army:" << " " << g_army->getNumberOfSoldiers() << std::endl;


}

int ResourceMonitoring::getGold(){
    return m_gold;
}

int ResourceMonitoring::getFood(){
    return m_food;
}

int ResourceMonitoring::getIron() {
    return m_iron;
}

int ResourceMonitoring::getWood() {
    return m_wood;
}

int ResourceMonitoring::getArmyStrenght() {
    return m_armyStrength;
}

int ResourceMonitoring::getNumberOfSoldiers() {
    return m_numberOfSoldiers;
}

void ResourceMonitoring::setGold(int price) {
m_gold -= price;
}





































/*void ResourceMonitoring::addArmyStrenght(Army army) {
if (m_gold >= army->getArmyStrength() * 10) {
    m_gold -= army->getArmyStrength() * 10;
    m_armyStrength += armyR->getArmy();
}
}

void ResourceMonitoring::addSoldiers(Army* army) {
    if (m_gold >= army->getNumberOfSoldiers() * 2) {
        m_gold -= army->getNumberOfSoldiers() * 2;
        m_armyStrength += army->getNumberOfSoldiers();
    }
} */



