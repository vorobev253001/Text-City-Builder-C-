#include "MyCity.h"


MyCity::MyCity(TileStats* tileStats, Army* army){
    m_tileStats = tileStats;
    m_tileStats->m_defense += army->getArmyStrength();
}

std::string MyCity::getAppearance(){
    return m_tileStats->m_appearance;
}