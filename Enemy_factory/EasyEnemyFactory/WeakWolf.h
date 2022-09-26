#ifndef CITYBUILDER_GAME_WEAKWOLF_H
#define CITYBUILDER_GAME_WEAKWOLF_H
#include "../Wolf.h"

class WeakWolf: public Wolf {
    int m_bite;
    int m_defense;
public:
    WeakWolf(int bite, int defense);
    int getAttack() override;
    int getDefense()override;
};


#endif //CITYBUILDER_GAME_WEAKWOLF_H
