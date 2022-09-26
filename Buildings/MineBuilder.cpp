#include "MineBuilder.h"


void MineBuilder::createBuilding(std::string description) {
m_buildings = new Buildings (description, 50, 0, 0, 25, 0);
}
