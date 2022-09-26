#include "EnemyTile.h"
EnemyTile::EnemyTile(TileStats* tileStats, EnemyType type): Tile() {
    m_tileStats = tileStats;
    if (Engine::s_difficulty == 1) {
        m_ef = new EasyEnemyFactory();
    }else{
        m_ef = new HardEnemyFactory();
    }
    switch (type) {
        case EnemyType::Wolf:
            m_wolf=m_ef->getWolf();
            break;
        case EnemyType::Barbarians:
            m_barbarians=m_ef->getBarbarians();
            break;
        case EnemyType::Daemon:
            m_daemon=m_ef->getDemon();
            break;
        default:
            std::cerr << "Wrong enemy type. Enemy types are the same as class names of enemies." << std::endl;
            break;
    }
}


std::string EnemyTile::getAppearance(){
    return m_tileStats->m_appearance;
}