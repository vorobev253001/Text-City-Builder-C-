#ifndef CITYBUILDER_GAME_EASYENEMYFACTORY_H
#define CITYBUILDER_GAME_EASYENEMYFACTORY_H

#include "WeakWolf.h"
#include "Weakling.h"
#include "LostBarbarians.h"
#include "../EnemyFactory.h"

class EasyEnemyFactory: public EnemyFactory {
public:
    Demon* getDemon();
    Barbarians* getBarbarians();
    Wolf* getWolf();
};


#endif //CITYBUILDER_GAME_EASYENEMYFACTORY_H
