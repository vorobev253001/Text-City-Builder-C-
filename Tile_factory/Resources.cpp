#include "Resources.h"

Resources::Resources(TileStats* tileStats): Tile() {
    m_tileStats = tileStats;
}

std::string Resources::getAppearance(){
    return m_tileStats->m_appearance;
}