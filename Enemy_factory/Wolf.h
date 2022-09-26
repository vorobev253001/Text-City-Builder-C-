#ifndef CITYBUILDER_GAME_WOLF_H
#define CITYBUILDER_GAME_WOLF_H


class Wolf {
public:
    virtual	int getAttack() = 0;
    virtual int getDefense()=0;
    Wolf(){};
    virtual ~Wolf(){};
};


#endif //CITYBUILDER_GAME_WOLF_H
