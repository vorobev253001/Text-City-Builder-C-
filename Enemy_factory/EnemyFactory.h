#ifndef CITYBUILDER_GAME_ENEMYFACTORY_H
#define CITYBUILDER_GAME_ENEMYFACTORY_H
#include "Demon.h"
#include "Barbarians.h"
#include "Wolf.h"

class EnemyFactory {
public:
    virtual Demon* getDemon()=0;
    virtual Barbarians* getBarbarians()=0;
    virtual Wolf* getWolf()=0;
};


#endif //CITYBUILDER_GAME_ENEMYFACTORY_H
