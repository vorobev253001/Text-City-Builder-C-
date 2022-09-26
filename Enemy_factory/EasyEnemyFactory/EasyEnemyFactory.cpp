#include "EasyEnemyFactory.h"

Demon* EasyEnemyFactory::getDemon(){
    return new Weakling(15,10);
}
Barbarians* EasyEnemyFactory::getBarbarians(){
    return new LostBarbarians(10,10);
}
Wolf* EasyEnemyFactory::getWolf(){
    return new WeakWolf(8,10);
}
