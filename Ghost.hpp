#pragma once

#include "Position.hpp"
#include "Direction.hpp"

struct Ghost {
    Position position{ 5, 5 };
    Direction direction{ Direction::UP };
    bool isFrightened{ false };
};