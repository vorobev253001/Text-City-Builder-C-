#ifndef CITYBUILDER_GAME_FARMBUILDER_H
#define CITYBUILDER_GAME_FARMBUILDER_H


#include "BuildingsBuilder.h"


class FarmBuilder: public BuildingsBuilder {
public:
    void createBuilding(std::string description) override;
};


#endif //CITYBUILDER_GAME_FARMBUILDER_H
