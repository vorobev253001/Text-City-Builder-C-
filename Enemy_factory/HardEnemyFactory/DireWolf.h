#ifndef CITYBUILDER_GAME_DIREWOLF_H
#define CITYBUILDER_GAME_DIREWOLF_H
#include "../Wolf.h"

class DireWolf: public Wolf {
    int m_bite;
    int m_cursedScratch;
    int m_defense;
public:
    DireWolf(int bite,int cursedScratch,int defense);
    int getAttack() override;
    int getDefense() override;
};


#endif //CITYBUILDER_GAME_DIREWOLF_H
