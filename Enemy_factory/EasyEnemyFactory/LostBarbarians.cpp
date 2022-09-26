#include "LostBarbarians.h"

LostBarbarians::LostBarbarians(int clubAttack, int defense){
    m_clubAttack =clubAttack;
    m_defense=defense;
}

int LostBarbarians::getAttack(){
    return m_clubAttack;
}

int LostBarbarians::getDefense(){
    return m_defense;
}