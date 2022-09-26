#include "Army.h"
#include "Map.h"


extern Army* g_army = new Army ();

Army::Army(){
    m_armyStrength = 0 ;
    m_numberOfSoldiers = 0 ;
    //m_armyActions.push_back("Print info about your army");
    // m_armyActions.push_back("View map");
    // m_armyActions.push_back("Move your army on the map" );
    // m_armyActions.push_back("Back to Main Menu" );


    //m_armyActions.push_back( )
}


int Army::getArmyStrength(){
    return m_armyStrength;

}


int Army::getNumberOfSoldiers(){
    return m_numberOfSoldiers;
}
void Army::printArmyInfo(){
    std::cout << "--------------MY ARMY INFO------------"<< "\n";
    std::cout << "Strength of your army : "<< m_armyStrength<< "\n";
   std::cout << "Number of your soldiers: " << m_numberOfSoldiers << "\n";
    std::cout<< "--------------------------------------" << std::endl;
}
void Army::printMapForArmy(Map* myMap) {
    //myMap -> print(myMap);
}

void Army::setArmyStrenght(int strenght) {
m_armyStrength += strenght;
}

void Army::setNumberOfSoldiers(int numberOfSoldiers) {
m_numberOfSoldiers += numberOfSoldiers;
}















/* void Army::doAction() {


    std::cout << "Army : You can do these actions: \n";
    for (int i = 0; i < m_armyActions.size(); ++i) {
        std::cout << i+1 << "] " << m_armyActions.at(i) << "\n";
    }
    std::cout << std::endl;
    int userInput = 0;
    std::cin >> userInput;
    if (userInput == 1) {
        printArmyInfo();
        doAction();
    } else if (userInput == 2) {
        std::cout << "print map somehow" << std::endl;
       // printMapForArmy(myMap);   // <<--- toto nevim jak
        doAction();
    } else if (userInput == 3) {
        std::cout <<"Pohyb po mapě" <<std::endl;
        doAction();
    }else if(userInput == 4){
    }else{
        std::cerr<<"Invalid option! Choose number from 1 to "<< m_armyActions.size()<<std::endl;
        doAction();
    }
} */

/*void Army::addArmyStrength(int plusStrength){
    m_armyStrength  = m_armyStrength + plusStrength;
    std::cout << "Strength of your army has risen by " << plusStrength << std::endl;

}
void Army::addSoldiers(int numberOfSoldiers){
    m_armyStrength  = m_armyStrength + numberOfSoldiers;
    std::cout << "Number of your soldiers has risen by  " << numberOfSoldiers << std::endl;

} */