#ifndef CITYBUILDER_GAME_ENGINE_H
#define CITYBUILDER_GAME_ENGINE_H
#include <iostream>
#include "MainMenu.h"
#include "Map.h"
class MainMenu;
/**
 * @brief class na pročištení main.cpp, startuje hru a čístí paměť po skončení hry
 */
class Engine {
private:
    void setDifficulty();
    void printStartingScreen();
public:
    Map* m_map;
    MainMenu* m_menu;
    void startGame(MainMenu* menu);
    ~Engine();
    static int getDifficulty();
    static int s_difficulty;
};
#endif //CITYBUILDER_GAME_ENGINE_H
