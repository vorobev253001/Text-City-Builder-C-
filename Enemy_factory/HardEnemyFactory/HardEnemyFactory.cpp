#include "HardEnemyFactory.h"

Demon* HardEnemyFactory::getDemon(){
    return new Djinn(10,20);
}
Barbarians* HardEnemyFactory::getBarbarians(){
    return new Shamans(20,20);
}
Wolf* HardEnemyFactory::getWolf(){
    return new DireWolf(8,10,20);
}