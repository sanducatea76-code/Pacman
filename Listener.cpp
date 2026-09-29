#include "Listener.hpp"
#include <conio.h>

void Listener::handleInput(Engine& engine) {
    // Verificăm dacă s-a apăsat o tastă
    if (_kbhit()) {
        int ch = _getch();

        // Dacă este o tastă specială (săgețile în Windows trimit 224 mai întâi)
        if (ch == 224) {
            ch = _getch();
            switch (ch) {
            case 72: engine.setDirection(Direction::UP); break;    // Săgeată Sus
            case 80: engine.setDirection(Direction::DOWN); break;  // Săgeată Jos
            case 75: engine.setDirection(Direction::LEFT); break;  // Săgeată Stânga
            case 77: engine.setDirection(Direction::RIGHT); break; // Săgeată Dreapta
            }
        }
        else {
            // Taste normale (W, A, S, D)
            switch (ch) {
            case 'w': case 'W': engine.setDirection(Direction::UP); break;
            case 's': case 'S': engine.setDirection(Direction::DOWN); break;
            case 'a': case 'A': engine.setDirection(Direction::LEFT); break;
            case 'd': case 'D': engine.setDirection(Direction::RIGHT); break;
            }
        }
    }
}