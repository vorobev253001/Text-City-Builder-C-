#include "WeakWolf.h"

WeakWolf::WeakWolf(int bite, int defense){
    m_bite=bite;
    m_defense= defense;
}

int WeakWolf::getAttack(){
    return m_bite;
}

int WeakWolf::getDefense(){
    return m_defense;
}