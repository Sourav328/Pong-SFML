#include "../../Header/Core/GameWindowManager.h"

namespace Core
{
    void GameWindowManager::initialize() 
    {
        game_window = new RenderWindow();
        createGameWindow();
    }
    void GameWindowManager::createGameWindow()
    {
        game_window->create(sf::VideoMode(game_window_width, game_window_height), game_title,
            sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize);
    }

    bool GameWindowManager::isGameRunning() 
    {
        return game_window->isOpen();
    }
    RenderWindow* GameWindowManager::getGameWindow() {
        return game_window;
    }
    void GameWindowManager::render()
    {
        game_window->clear(Color::Red);
        game_window->display();
    }
  
}