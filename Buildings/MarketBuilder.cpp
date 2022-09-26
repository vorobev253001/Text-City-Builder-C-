#include "MarketBuilder.h"

void MarketBuilder::createBuilding(std::string description) {
    m_buildings = new Buildings (description, 50, 100, 0, 0, 0);
}