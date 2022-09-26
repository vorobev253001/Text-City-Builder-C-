#include "BuildingsDirector.h"

BuildingsDirector::BuildingsDirector(BuildingsBuilder *builder) {
m_builder = builder;
}

void BuildingsDirector::setBuilder(BuildingsBuilder *builder) {
m_builder = builder;
}

Buildings *BuildingsDirector::createBuilding(std::string description) {
    m_builder->createBuilding(description);
    return m_builder->getBuildings();
}

