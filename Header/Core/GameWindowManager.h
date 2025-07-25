#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;

namespace Core 
{
    class GameWindowManager 
    {
      private:
        RenderWindow* game_window;
        int game_window_width = 1280;
        int game_window_height = 720;
        std::string game_title = "PING PONG";

        

        
      public:
          void initialize();
          void createGameWindow();
          bool isGameRunning();
          RenderWindow* getGameWindow();
          void clearGameWindow();
          void displayGameWindow();
        
    };
}
    