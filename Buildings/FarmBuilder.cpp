#include "FarmBuilder.h"

void FarmBuilder::createBuilding(std::string description) {
    m_buildings = new Buildings (description, 50, 0, 40, 0, 0);
}