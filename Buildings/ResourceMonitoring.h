#ifndef CITYBUILDER_GAME_RESOURCEMONITORING_H
#define CITYBUILDER_GAME_RESOURCEMONITORING_H
#include "Buildings.h"
#include "../Army.h"
#include "vector"
#include "ArmoryBuilder.h"

class ResourceMonitoring {
    static int m_gold;
    static int m_food;
    static int m_iron;
    static int m_wood;
    static int m_armyStrength ;
    static int m_numberOfSoldiers;

public:
    ResourceMonitoring();
    static void addBuilding(Buildings* building);
    static void addArmyStrenght(Army* army);
    static void addSoldiers(Army* army);
    static void printAllInfo();
    static int getGold();
    static void setGold(int gold);
    static int getFood();
    static int getIron();
    static int getWood();
    static int getArmyStrenght();
    static int getNumberOfSoldiers();
};




#endif //CITYBUILDER_GAME_RESOURCEMONITORING_H
