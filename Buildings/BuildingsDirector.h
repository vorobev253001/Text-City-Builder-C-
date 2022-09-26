#ifndef BUILDERS_BUILDINGSDIRECTOR_H
#define BUILDERS_BUILDINGSDIRECTOR_H
#include "BuildingsBuilder.h"

// Trida zodpovedna za stavbu
class BuildingsDirector {
    BuildingsBuilder* m_builder;
public:
    BuildingsDirector(BuildingsBuilder* builder);
    void setBuilder(BuildingsBuilder* builder);
    Buildings* createBuilding(std::string description);

};


#endif //BUILDERS_BUILDINGSDIRECTOR_H