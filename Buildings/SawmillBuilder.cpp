#include "SawmillBuilder.h"

void SawmillBuilder::createBuilding(std::string description) {
    m_buildings = new Buildings (description, 75, 0, 0, 0, 40);
}