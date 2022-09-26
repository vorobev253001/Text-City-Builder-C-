#ifndef CITYBUILDER_GAME_ENEMYTILE_H
#define CITYBUILDER_GAME_ENEMYTILE_H

#include "../Enemy_factory/HardEnemyFactory/HardEnemyFactory.h"
#include "../Enemy_factory/EasyEnemyFactory/EasyEnemyFactory.h"
#include "Tile.h"
#include "../Enemy_factory/EnemyFactory.h"
#include "../Engine.h"

class EnemyTile: public Tile {
    TileStats* m_tileStats;
    EnemyFactory* m_ef = nullptr;
    Barbarians* m_barbarians = nullptr;
    Wolf* m_wolf = nullptr;
    Demon* m_daemon = nullptr;
public:
    enum class EnemyType{
        Daemon,Barbarians,Wolf
    };
    EnemyTile(TileStats* tileStats, EnemyType type);
    std::string getAppearance() override;
};


#endif //CITYBUILDER_GAME_ENEMYTILE_H
