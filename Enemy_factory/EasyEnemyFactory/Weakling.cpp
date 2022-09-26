#include "Weakling.h"

Weakling::Weakling(int hex, int defense){
    m_hex=hex;
    m_defense=defense;
}

int Weakling::getAttack(){
    return m_hex;
}

int Weakling::getDefense(){
    return m_defense;
}