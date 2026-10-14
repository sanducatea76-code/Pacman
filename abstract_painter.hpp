#pragma once
#include "Position.hpp"

struct AbstractPainter {
    virtual void DrawImage(Position topLeft, Position bottomRight, char** image) = 0;
    virtual void WriteText(Position position, char* text) = 0;
    virtual ~AbstractPainter() = default;
};