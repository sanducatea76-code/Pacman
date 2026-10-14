#include "Listener.hpp"
#include <conio.h>

void Listener::handleInput(Engine& engine) {
    if (_kbhit()) {
        char key = _getch();
        switch (key) {
        case 'w': case 'W': engine.setDirection(Direction::UP); break;
        case 's': case 'S': engine.setDirection(Direction::DOWN); break;
        case 'a': case 'A': engine.setDirection(Direction::LEFT); break;
        case 'd': case 'D': engine.setDirection(Direction::RIGHT); break;
        }
    }
}