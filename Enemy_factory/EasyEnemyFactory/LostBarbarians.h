#ifndef CITYBUILDER_GAME_LOSTBARBARIANS_H
#define CITYBUILDER_GAME_LOSTBARBARIANS_H
#include "../Barbarians.h"

class LostBarbarians: public Barbarians{
    int m_clubAttack;
    int m_defense;
public:
    LostBarbarians(int clubAttack, int defense);
    int getAttack() override;
    int getDefense() override;
};


#endif //CITYBUILDER_GAME_LOSTBARBARIANS_H
