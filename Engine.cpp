#include "Engine.hpp"

Engine::Engine() : currentState(GameState::MENU), remainingDots(0), frameCounter(0) {}

void Engine::init() {
    map = {
        "####################",
        "#C........#........#",
        "#.##.###.###.###..##",
        "#..................#",
        "#.##.#.#####.#.##..#",
        "#....#...#...#.....#",
        "####.###.#.###.#####",
        "#..................#",
        "#G.......#.........#",
        "####################"
    };
    countTotalDots();
    currentState = GameState::PLAYING;
}

void Engine::setDirection(Direction dir) {
    pacman.direction = dir;
}

void Engine::update() {
    // Aici vei adăuga logica de mișcare a lui Pacman și a Ghost-urilor
    frameCounter++;
}

GameState Engine::getState() const { return currentState; }
const Pacman& Engine::getPacman() const { return pacman; }
const std::vector<Ghost>& Engine::getGhosts() const { return ghosts; }
const std::vector<std::string>& Engine::getMap() const { return map; }

void Engine::countTotalDots() {
    remainingDots = 0;
    for (const auto& row : map) {
        for (char c : row) {
            if (c == '.') remainingDots++;
        }
    }
}

void Engine::updateGhostPosition(Ghost& ghost) {
    // Logică AI pentru fantomă
}