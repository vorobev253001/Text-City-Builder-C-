#ifndef CITYBUILDER_GAME_SAWMILLBUILDER_H
#define CITYBUILDER_GAME_SAWMILLBUILDER_H


#include "BuildingsBuilder.h"


class SawmillBuilder: public BuildingsBuilder {
public:
    void createBuilding(std::string description) override;
};


#endif //CITYBUILDER_GAME_SAWMILLBUILDER_H
