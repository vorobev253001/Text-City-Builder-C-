#include "Shamans.h"

Shamans::Shamans(int spell, int defense){
    m_spell =spell;
    m_defense =defense;
}

int Shamans::getAttack() {
    return m_spell;
}

int Shamans::getDefense(){
    return m_defense;
}