#pragma once

#include <vector>
#include <string>
#include <cmath>
#include "GameState.hpp"
#include "Pacman.hpp"
#include "Ghost.hpp"

class Engine {
public:
    Engine();

    void init();

    void setDirection(Direction dir);

    void update();

    GameState getState() const;
    const Pacman& getPacman() const;
    const std::vector<Ghost>& getGhosts() const;
    const std::vector<std::string>& getMap() const;

private:
    Pacman pacman;
    std::vector<Ghost> ghosts;
    std::vector<std::string> map;
    GameState currentState{ GameState::MENU };
    int remainingDots{ 0 };
    int frameCounter{ 0 }; 

    void countTotalDots();

    void updateGhostPosition(Ghost& ghost);
};