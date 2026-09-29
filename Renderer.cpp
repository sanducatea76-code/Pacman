#include "Renderer.hpp"

void Renderer::render(const Engine& engine) const {
    // 1. Mutăm cursorul la începutul consolei sau ștergem ecranul 
    // (system("cls") poate da un mic efect de pâlpâire, dar este cel mai simplu pentru laborator)
    system("cls");

    // 2. Afișăm harta primită din Engine
    const auto& map = engine.getMap();
    for (const std::string& row : map) {
        std::cout << row << "\n";
    }

    // 3. Poți afișa și alte informații utile (opțional)
    std::cout << "\nStarea jocului activează randarea.\n";
}