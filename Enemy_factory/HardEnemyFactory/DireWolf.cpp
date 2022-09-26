#include "DireWolf.h"

DireWolf::DireWolf(int bite,int cursedScratch,int defense){
    m_cursedScratch = cursedScratch;
    m_bite = bite;
    m_defense=defense;
}

int DireWolf::getAttack(){
    return m_bite+m_cursedScratch;
}

int DireWolf::getDefense(){
    return m_defense;
}