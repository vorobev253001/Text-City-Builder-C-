#ifndef MENU_H_ARMY_H
#define MENU_H_ARMY_H
#include "MenuOptions.h"
#include "Map.h"




class Army{

private:
   // std::vector<std::string> m_armyActions;
    unsigned int m_armyStrength ;
    unsigned int m_numberOfSoldiers;
public:
    Army();
    int getArmyStrength();
    int getNumberOfSoldiers();
    void setArmyStrenght(int strenght);
    void setNumberOfSoldiers(int number);

    void printArmyInfo();
    void printMapForArmy(Map* map_obj);

};

extern Army* g_army;

#endif //MENU_H_ARMY_H
