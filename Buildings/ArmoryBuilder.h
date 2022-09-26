#ifndef CITYBUILDER_GAME_ARMORYBUILDER_H
#define CITYBUILDER_GAME_ARMORYBUILDER_H


#include "BuildingsBuilder.h"
#include "../Army.h"


class ArmoryBuilder: public BuildingsBuilder {

public:
    int getArmy();
    void createBuilding(std::string description) override;
};


#endif //CITYBUILDER_GAME_ARMORYBUILDER_H
