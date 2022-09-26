#include "Treasure.h"
Treasure::Treasure(TileStats* tileStats): Tile() {
    m_tileStats = tileStats;
}

std::string Treasure::getAppearance(){
    return m_tileStats->m_appearance;
}