#ifndef CITYBUILDER_GAME_WEAKLING_H
#define CITYBUILDER_GAME_WEAKLING_H

#include "../Demon.h"


class Weakling:public Demon{
    int m_hex;
    int m_defense;
public:
    Weakling(int hex, int defense);
    int getAttack() override;
    int getDefense() override;
};


#endif //CITYBUILDER_GAME_WEAKLING_H
