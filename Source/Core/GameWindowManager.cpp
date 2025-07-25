#include "../../Header/Core/GameWindowManager.h"

namespace Core
{
    void GameWindowManager::initialize() {
        game_window = new RenderWindow();
        createGameWindow();
    }
    //*void GameWindowManager::initialize() 
    //{
    //    game_window->create(sf::VideoMode(game_window_width, game_window_height), game_title,
    //        sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize);
    //}
    void GameWindowManager::createGameWindow() 
    {
        game_window->create(VideoMode(game_window_width, game_window_height), game_title, Style::Titlebar | Style::Close);
    }
   
    bool GameWindowManager::isGameRunning() 
    {
        return game_window->isOpen();
    }
    RenderWindow* GameWindowManager::getGameWindow() {
        return game_window;
    }
    void GameWindowManager::clearGameWindow()
    {
        game_window->clear(Color::Red);
    }
   
    void GameWindowManager::displayGameWindow()
    {
        game_window->display();
    }
  
}