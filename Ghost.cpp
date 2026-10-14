#include "Ghost.hpp"

Ghost::Ghost() : position(5, 5), direction(Direction::UP), isFrightened(false) {}

Ghost::Ghost(const Position& _position, Direction _dir, bool _frightened)
    : position(_position), direction(_dir), isFrightened(_frightened) {
}

Ghost::Ghost(const Ghost& other)
    : position(other.position), direction(other.direction), isFrightened(other.isFrightened) {
}

Ghost& Ghost::operator=(const Ghost& other) {
    if (this != &other) {
        position = other.position;
        direction = other.direction;
        isFrightened = other.isFrightened;
    }
    return *this;
}

bool Ghost::operator==(const Ghost& other) const {
    return position == other.position && direction == other.direction;
}

std::istream& operator>>(std::istream& in, Ghost& ghost) {
    in >> ghost.position >> ghost.isFrightened;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Ghost& ghost) {
    out << "Ghost[Pos: " << ghost.position << ", Frightened: " << (ghost.isFrightened ? "Yes" : "No") << "]";
    return out;
}