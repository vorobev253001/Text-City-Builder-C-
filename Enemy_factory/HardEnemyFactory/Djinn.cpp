#include "Djinn.h"


Djinn::Djinn(int wishGoneWrong,int defense){
    m_wishGoneWrong=wishGoneWrong;
    m_defense= defense;
}

int Djinn::getAttack(){
    return 3*m_wishGoneWrong;
}

int Djinn::getDefense(){
    return 3*m_defense;
}
