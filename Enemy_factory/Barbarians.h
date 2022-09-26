#ifndef CITYBUILDER_GAME_BARBARIANS_H
#define CITYBUILDER_GAME_BARBARIANS_H


class Barbarians {
public:
    virtual	int getAttack() = 0;
    virtual int getDefense()=0;
    Barbarians(){};
    virtual ~Barbarians(){};
};


#endif //CITYBUILDER_GAME_BARBARIANS_H
