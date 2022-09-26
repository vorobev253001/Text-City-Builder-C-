#include "MainMenu.h"
#include "Buildings/BuildingOptions.h"
#include "Buildings/Buildings.h"
#include "ArmyOptions.h"
#include "MapOptions.h"
#include "Army.h"


MainMenu::MainMenu(){
    m_menu.push_back(new BuildingOptions()); //
    m_menu.push_back(new ArmyOptions());
    m_menu.push_back(new DifficultyOption);
    m_menu.push_back(new MapOptions);
    m_menu.push_back(new EndOptions());
}

void MainMenu::interact() {
    listMenuOptions();
    callOperation();
    interact();

}

void MainMenu::listMenuOptions() {
    std::cout << "--------------MENU--------------\n";
    std::cout << "You can access: \n";
    for (int i = 0; i < m_menu.size(); ++i) {
        std::cout << i+1 << "] " << m_menu.at(i)->getOptionDescription() << "\n";
    }
    std::cout << "--------------------------------\n";
    std::cout << std::endl;

}

void MainMenu::callOperation() {
    int userInput = 0;
    std::cin >> userInput;
    if(userInput>m_menu.size()){
        std::cerr<<"Invalid option! Choose number from 1 to " << m_menu.size()<< std::endl;
    }else{
        m_menu.at(userInput-1) ->doAction();
    }
}



