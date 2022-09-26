#ifndef BUILDERS_MINEBUILDER_H
#define BUILDERS_MINEBUILDER_H
#include "BuildingsBuilder.h"


class MineBuilder: public BuildingsBuilder {
public:
    void createBuilding(std::string description) override;
};


#endif //BUILDERS_MINEBUILDER_H
