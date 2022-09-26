#ifndef BUILDERS_BUILDINGSBUILDER_H
#define BUILDERS_BUILDINGSBUILDER_H
#include "Buildings.h"


class BuildingsBuilder {
protected:
    Buildings* m_buildings;

public:
    BuildingsBuilder();
    virtual void createBuilding(std::string description) = 0;
    Buildings* getBuildings();
};


#endif //BUILDERS_BUILDINGSBUILDER_H
