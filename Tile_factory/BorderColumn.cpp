#include "BorderColumn.h"

BorderColumn::BorderColumn(TileStats* tileStats): Tile() {
    m_tileStats = tileStats;
}

std::string BorderColumn::getAppearance(){
    return m_tileStats->m_appearance;
}