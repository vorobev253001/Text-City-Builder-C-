#include "ArmyOptions.h"
#include "Buildings/ResourceMonitoring.h"
#include "Army.h"
#include "Buildings/ArmoryBuilder.h"

extern Army* g_army;

ArmyOptions::ArmyOptions(): MenuOptions("Army") {
    m_army = "What would you like to do with your army?";
    m_armyActions.push_back("Add strenght");
    m_armyActions.push_back("Add soldiers");
    //m_armyActions.push_back("Print info about army!");
    m_armyActions.push_back("Back to Main Menu!" );
}



void ArmyOptions::doAction() {
std::cout << "What would you like to do with your army?" << std::endl;
    for (int i = 0; i < m_armyActions.size(); ++i) {
        std::cout << i << "] " << m_armyActions.at(i) << "\n";
    }
    std::cout << std::endl;
    int userInput = 0;
    std::cin >> userInput;
    if (userInput == 0) {
        if (ResourceMonitoring::getGold() >= 100) {
            g_army->setArmyStrenght(10);
            ResourceMonitoring::setGold(100);
        } else { std::cout << "Not enough gold!" << std::endl;}
        }
    else if (userInput == 1){
        if (ResourceMonitoring::getGold() >= 50) {
            g_army->setNumberOfSoldiers(10);
            ResourceMonitoring::setGold(50);
        } else { std::cout << "Not enough gold!" << std::endl;
    }
} else if (userInput == 2){


    } else if (userInput == 3){

    } }







/* Army* army = new Army();
        m_army = army->getArmyStrength() + 10;
         ResourceMonitoring::addArmyStrenght(army, );*/


/*void ArmyOptions::addArmyStrength(Army * army, ArmoryBuilder* armyR) {
army->getArmyStrength() + 10;
ResourceMonitoring::addArmyStrenght(army, armyR);
}

//void ArmyOptions::addSoldiers(Army* army) {
//   m_army = army->getNumberOfSoldiers() + 50;
//   ResourceMonitoring::addSoldiers(army);
//} */





