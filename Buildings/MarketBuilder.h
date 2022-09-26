#ifndef CITYBUILDER_GAME_MARKETBUILDER_H
#define CITYBUILDER_GAME_MARKETBUILDER_H


#include "BuildingsBuilder.h"


class MarketBuilder: public BuildingsBuilder {
public:
    void createBuilding(std::string description) override;
};


#endif //CITYBUILDER_GAME_MARKETBUILDER_H
