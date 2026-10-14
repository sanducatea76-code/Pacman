#include "Pacman.hpp"

Pacman::Pacman() : position(1, 1), direction(Direction::NONE), lives(3), score(0) {}

Pacman::Pacman(const Position& _position, Direction _dir, int _lives, int _score)
    : position(_position), direction(_dir), lives(_lives), score(_score) {
}

Pacman::Pacman(const Pacman& other)
    : position(other.position), direction(other.direction), lives(other.lives), score(other.score) {
}

Pacman& Pacman::operator=(const Pacman& other) {
    if (this != &other) {
        position = other.position;
        direction = other.direction;
        lives = other.lives;
        score = other.score;
    }
    return *this;
}

bool Pacman::operator==(const Pacman& other) const {
    return position == other.position && lives == other.lives && score == other.score;
}

std::istream& operator>>(std::istream& in, Pacman& pacman) {
    in >> pacman.position >> pacman.lives >> pacman.score;
    // Direction se poate citi ca int si converti, sau omis pentru simplitate
    return in;
}

std::ostream& operator<<(std::ostream& out, const Pacman& pacman) {
    out << "Pacman[Pos: " << pacman.position << ", Lives: " << pacman.lives << ", Score: " << pacman.score << "]";
    return out;
}