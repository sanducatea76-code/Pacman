#include "Position.hpp"

Position::Position(int _x, int _y) : x(_x), y(_y) {}

Position::Position(const Position& other) : x(other.x), y(other.y) {}

Position& Position::operator=(const Position& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

bool Position::operator==(const Position& other) const {
    return x == other.x && y == other.y;
}

std::istream& operator>>(std::istream& in, Position& position) {
    in >> position.x >> position.y;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Position& position) {
    out << position.x << " " << position.y;
    return out;
}