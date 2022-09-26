#ifndef CITYBUILDER_GAME_DJINN_H
#define CITYBUILDER_GAME_DJINN_H
#include "../Demon.h"

class Djinn: public Demon{
    int m_wishGoneWrong;
    int m_defense;
public:
    Djinn(int wishGoneWrong, int defense);
    int getAttack() override;
    int getDefense() override;
};


#endif //CITYBUILDER_GAME_DJINN_H
