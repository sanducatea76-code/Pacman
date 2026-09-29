#include "Engine.hpp"
#include "Renderer.hpp"
#include "Listener.hpp"
Engine::Engine() {}

void Engine::init() {}

void Engine::setDirection(Direction dir) {}

void Engine::update() {}

GameState Engine::getState() const {}
const Pacman& Engine::getPacman() const {}
const std::vector<Ghost>& Engine::getGhosts() const {}
const std::vector<std::string>& Engine::getMap() const {}