#include <iostream>
#include "Engine.h"

int main() {
    Engine* engine = new Engine();
    engine->startGame(new MainMenu);
    delete engine;
    return 0;
}
