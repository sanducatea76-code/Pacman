#include "Renderer.hpp"

void Renderer::render(const Engine& engine) const {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, { 0, 0 });

    const auto& map = engine.getMap();
    for (const auto& row : map) {
        std::cout << row << std::endl;
    }

    // Folosim metoda din clasa de bază pentru a demonstra moștenirea
    std::string scoreText = "Score: " + std::to_string(engine.getPacman().score) + " | Lives: " + std::to_string(engine.getPacman().lives);
    // Const_cast este necesar doar pentru a respecta semnătura exactă char* din cerință
    WriteText({ 0, static_cast<int>(map.size()) + 1 }, const_cast<char*>(scoreText.c_str()));
}

void Renderer::DrawImage(Position topLeft, Position bottomRight, char** image) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int y = topLeft.y; y <= bottomRight.y; ++y) {
        SetConsoleCursorPosition(hConsole, { static_cast<SHORT>(topLeft.x), static_cast<SHORT>(y) });
        for (int x = topLeft.x; x <= bottomRight.x; ++x) {
            std::cout << image[y - topLeft.y][x - topLeft.x];
        }
    }
}

void Renderer::WriteText(Position position, char* text) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, { static_cast<SHORT>(position.x), static_cast<SHORT>(position.y) });
    std::cout << text;
}