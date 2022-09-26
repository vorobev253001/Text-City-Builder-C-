#ifndef CITYBUILDER_GAME_MENUOPTIONS_H
#define CITYBUILDER_GAME_MENUOPTIONS_H
#include <iostream>


class MenuOptions {
    std::string m_description;
public:
    MenuOptions(std::string optionDescription);
    std::string getOptionDescription();
    virtual void doAction() =0;
};


#endif //CITYBUILDER_GAME_MENUOPTIONS_H
