#include "Engine.hpp"

int main() {
    // 1. Creăm un obiect de tip Engine (instanțiem clasa)
    Engine game;

    // 2. Inițializăm jocul folosind metoda din clasă
    game.init();

    // 3. Aici poți adăuga o buclă de joc simplă (Game Loop) 
    // în funcție de cum ai structurat restul proiectului pentru laborator:
    /*
    while (game.getState() != GameState::EXIT) {
        game.update();
    }
    */

    return 0;
}