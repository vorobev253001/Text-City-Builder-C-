#ifndef CITYBUILDER_GAME_HARDENEMYFACTORY_H
#define CITYBUILDER_GAME_HARDENEMYFACTORY_H
#include "DireWolf.h"
#include "Djinn.h"
#include "Shamans.h"
#include "../EnemyFactory.h"

class HardEnemyFactory: public EnemyFactory {
public:
    Demon* getDemon();
    Barbarians* getBarbarians();
    Wolf* getWolf();
};


#endif //CITYBUILDER_GAME_HARDENEMYFACTORY_H
