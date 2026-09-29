#pragma once

#include "Position.hpp"
#include "Direction.hpp"

struct Pacman {
    Position position{ 1, 1 };
    Direction direction{ Direction::NONE };
    int lives{ 3 };
    int score{ 0 };
};