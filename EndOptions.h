#ifndef CITYBUILDER_GAME_ENDOPTIONS_H
#define CITYBUILDER_GAME_ENDOPTIONS_H
#include "MenuOptions.h"
#include <iostream>
#include <vector>

class EndOptions: public MenuOptions {
    std::vector<std::string> m_endActions;
public:
    EndOptions();
    void doAction() override;
};


#endif //CITYBUILDER_GAME_ENDOPTIONS_H
