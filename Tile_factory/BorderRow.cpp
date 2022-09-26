#include "BorderRow.h"

BorderRow::BorderRow(TileStats* tileStats): Tile() {
    m_tileStats = tileStats;
}

std::string BorderRow::getAppearance(){
    return m_tileStats->m_appearance;
}