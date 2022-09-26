#include "MenuOptions.h"

MenuOptions:: MenuOptions(std::string optionDescription){
    m_description = optionDescription;
}

std::string MenuOptions::getOptionDescription(){
    return m_description;
}


