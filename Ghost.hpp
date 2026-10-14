#pragma once
#include "Position.hpp"
#include "Direction.hpp"
#include <iostream>

struct Ghost {
    Position position;
    Direction direction;
    bool isFrightened;

    Ghost();
    Ghost(const Position& _position, Direction _dir = Direction::UP, bool _frightened = false);
    Ghost(const Ghost& other);

    Ghost& operator=(const Ghost& other);
    bool operator==(const Ghost& other) const;
};

std::istream& operator>>(std::istream& in, Ghost& ghost);
std::ostream& operator<<(std::ostream& out, const Ghost& ghost);