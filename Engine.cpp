#include "Engine.h"


void Engine::startGame(MainMenu* menu){
    m_menu=menu;
    m_map->generateMap(new Map(12, 12));
    //m_map->print();
    printStartingScreen();
    menu->interact();
}


void Engine::printStartingScreen(){
    std::cout << "###########################################################\n" <<
              "Welcome to CityBuilderGameOfTheYearEdition\n" <<
              "###########################################################\n";
    setDifficulty();
    std::cout << "###########################################################\n";
}

int Engine::s_difficulty=0;

void Engine::setDifficulty(){
    int difficulty;
    std::cout << "Choose difficulty Warrior! Easy[1] or Hard[2]!\n";
    std::cin >> difficulty;
    switch (difficulty){
        case 1:
            std::cout<<"You chose easy. You don't like to be challenged much, huh?!\n";
            s_difficulty = difficulty;
            break;
        case 2:
            std::cout<<"You chose hard. What a mighty warrior! Let's see if you can pull it off!\n";
            s_difficulty = difficulty;
            break;
        default:
            std::cerr<<"Not a valid option! You can choose Easy[1] or Hard[2]! Let's try that again!\n";
            setDifficulty();
    }
}

int Engine::getDifficulty(){
    return s_difficulty;
}

Engine::~Engine(){
    delete m_menu;
}