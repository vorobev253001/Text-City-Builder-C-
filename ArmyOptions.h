#ifndef CITYBUILDER_GAME_ARMYOPTIONS_H
#define CITYBUILDER_GAME_ARMYOPTIONS_H
#include "MenuOptions.h"
#include "Army.h"
#include "vector"
#include "Buildings/ArmoryBuilder.h"



class ArmyOptions: public MenuOptions {
    std::vector<std::string> m_armyActions;
    std::string m_army;
public:
    ArmyOptions();
    //void addArmyStrength(Army * army, ArmoryBuilder* armyR);
   // void addSoldiers(Army* army);
    void doAction() override;
};


#endif //CITYBUILDER_GAME_ARMYOPTIONS_H
