#ifndef MENU_H_BUILDINGS_H
#define MENU_H_BUILDINGS_H
#include "../MenuOptions.h"
#include "vector"
#include "../Army.h"

class Buildings{
    /*   class MenuOptions {
           std::string m_description;
       public:
           MenuOptions(std::string optionDescription);
           std::string getOptionDescription();
           virtual void doAction() =0;
    */

    /*
     *  Momentalne implementovano jen stavba "Mine", budova zodpovedna za zlato a atribut m_gold.
     *  Zaprve potreba to prave napojit do "MenuOptions"
     */
    std::vector<std::string> m_buildingActions;
    std::string m_description;
    int m_BuildingPrice;
    int m_BuildingGold;
    int m_BuildingFood;
    int m_BuildingIron;
    int m_BuildingWood;
    int m_numberOfSoldiers;
    int m_armyStrenght;

public:
    Buildings(std::string description, int price, int gold, int food, int iron, int wood/*int numberOfSoldiers, int armyStrenght*/);
    Buildings(std::string description, int price, int numberOfSoldiers, int armyStrenght);
    int getBuildingPrice();
    int getBuildingGold();
    int getBuildingFood();
    int getBuildingIron();
    int getBuildingWood();
    int getNumberOfSoldiers();
    int getArmyStrenght();
    void doAction();
    virtual void printInfo();

};


#endif //MENU_H_BUILDINGS_H