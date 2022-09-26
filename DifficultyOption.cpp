//
// Created by kanss on 25.05.2022.
//

#include "DifficultyOption.h"

DifficultyOption::DifficultyOption(): MenuOptions("Change difficulty") {
    m_difficultyActions.push_back("Yes, I wish to change it!");
    m_difficultyActions.push_back("No, I wish it to stay the same!");
}

void DifficultyOption::doAction(){
    if(Engine::s_difficulty == 1){
        std::cout<< "Your difficulty is currently set on Easy["<< Engine::s_difficulty<<"]!\n";
    }else{
        std::cout<< "Your difficulty is currently set on Hard["<< Engine::s_difficulty<<"]!\n";
    }

    for (int i = 0; i < m_difficultyActions.size(); ++i) {
        std::cout << i+1 << "] " << m_difficultyActions.at(i) << "\n";
    }

    std::cout << std::endl;
    int userInput = 0;
    std::cin >> userInput;
    if (userInput == 1) {
        if (Engine::getDifficulty() == 1){
            std::cout << "Do you wish to change difficulty to Hard?\n";
            Engine::s_difficulty=2;
        }else{
            std::cout << "Do you wish to change difficulty easy?\n";
            Engine::s_difficulty=1;
        }
    }else if (userInput == 2) {
    }else{
        std::cerr<<"Invalid option! Choose number from 1 to " << m_difficultyActions.size()<<std::endl;
        doAction();
    }
}