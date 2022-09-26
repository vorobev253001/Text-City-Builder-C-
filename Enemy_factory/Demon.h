#ifndef CITYBUILDER_GAME_DEMON_H
#define CITYBUILDER_GAME_DEMON_H


class Demon {
public:
    virtual int getAttack()=0;
    virtual int getDefense()=0;
    Demon(){}
    virtual ~Demon(){}
};


#endif //CITYBUILDER_GAME_DEMON_H
