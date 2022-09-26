#include "EnemyVillage.h"

EnemyVillage::EnemyVillage(TileStats* tileStats): Tile() {
    m_tileStats = tileStats;
}

std::string EnemyVillage::getAppearance(){
    return m_tileStats->m_appearance;
}