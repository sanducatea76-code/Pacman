#include "Engine.hpp"
#include "Renderer.hpp"
#include "Listener.hpp"
#include <windows.h>

int main() {
    Engine game;
    Renderer renderer;
    Listener listener;

    game.init();

    while (game.getState() == GameState::PLAYING) {
        listener.handleInput(game);
        game.update();
        renderer.render(game);
        Sleep(150); // Controlul framerate-ului
    }

    std::cout << "\nGame Over! Final Score: " << game.getPacman().score << std::endl;
    return 0;
}