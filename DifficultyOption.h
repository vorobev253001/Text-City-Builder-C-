#ifndef CITYBUILDER_GAME_DIFFICULTYOPTION_H
#define CITYBUILDER_GAME_DIFFICULTYOPTION_H
#include <iostream>
#include <vector>
#include "MenuOptions.h"
#include "Engine.h"


class DifficultyOption:public MenuOptions {
    std::vector<std::string> m_difficultyActions;
public:
    DifficultyOption();
    void doAction() override;
};


#endif //CITYBUILDER_GAME_DIFFICULTYOPTION_H
