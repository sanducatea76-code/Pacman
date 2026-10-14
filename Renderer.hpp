#pragma once
#include "abstract_painter.hpp"
#include "Engine.hpp"
#include <iostream>
#include <windows.h>
#include <string>

class Renderer : public AbstractPainter {
public:
    void render(const Engine& engine) const;

    // Implementarea metodelor pure virtuale din AbstractPainter
    void DrawImage(Position topLeft, Position bottomRight, char** image) override;
    void WriteText(Position position, char* text) override;
};