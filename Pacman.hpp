#pragma once
#include "Position.hpp"
#include "Direction.hpp"
#include <iostream>

struct Pacman {
    Position position;
    Direction direction;
    int lives;
    int score;

    Pacman();
    Pacman(const Position& _position, Direction _dir = Direction::NONE, int _lives = 3, int _score = 0);
    Pacman(const Pacman& other);

    Pacman& operator=(const Pacman& other);
    bool operator==(const Pacman& other) const;
};

std::istream& operator>>(std::istream& in, Pacman& pacman);
std::ostream& operator<<(std::ostream& out, const Pacman& pacman);