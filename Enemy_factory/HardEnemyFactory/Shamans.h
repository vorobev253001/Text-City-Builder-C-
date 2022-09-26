#ifndef CITYBUILDER_GAME_SHAMANS_H
#define CITYBUILDER_GAME_SHAMANS_H
#include "../Barbarians.h"

class Shamans: public Barbarians{
    int m_spell;
    int m_defense;
public:
    Shamans(int spell, int defense);
    int getAttack()override;
    int getDefense()override;
};


#endif //CITYBUILDER_GAME_SHAMANS_H
