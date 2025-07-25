
#include "Header/Core/GameWindowManager.h"
#include "Header/Event/EventManager.h"

int main()
{
    
    Core::GameWindowManager gameWindowManager;
    gameWindowManager.initialize();

  
    GameEvent::EventManager eventManager;

    
    while (gameWindowManager.isGameRunning())
    {
        eventManager.pollEvents(gameWindowManager.getGameWindow());

      
        gameWindowManager.render();
    }

    return 0;
}