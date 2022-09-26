#include "EndOptions.h"

EndOptions::EndOptions(): MenuOptions("End Game") {
    m_endActions.push_back("Yes, I give up!");
    m_endActions.push_back("No, I want to finish this game!");
}
void EndOptions::doAction(){
    std::cout << "Do you really wanna end the game? Your progress will be lost!\n";
    for (int i = 0; i < m_endActions.size(); ++i) {
        std::cout << i+1 << "] " << m_endActions.at(i) << "\n";
    }
    std::cout << std::endl;
    int userInput = 0;
    std::cin >> userInput;
    if (userInput == 1) {
        exit(0);
    }else if (userInput == 2) {
    }else{
        std::cerr<<"Invalid option! Choose number from 1 to " << m_endActions.size()<<std::endl;
        doAction();
    }
}
