#ifndef CITYBUILDER_GAME_MAINMENU_H
#define CITYBUILDER_GAME_MAINMENU_H
#include <iostream>
#include <vector>
#include "MenuOptions.h"
#include "Buildings/Buildings.h"
#include "Army.h"
#include "ArmyOptions.h"
#include "EndOptions.h"
#include "DifficultyOption.h"

class MainMenu {
    std::vector <MenuOptions*> m_menu;
public:
    MainMenu();
    void interact ();

private:
    void listMenuOptions();
    void callOperation();
;
};


#endif //CITYBUILDER_GAME_MAINMENU_H
