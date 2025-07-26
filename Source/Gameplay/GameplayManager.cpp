#include "../../Header/Gameplay/GameplayManager.h"
#include "../../Header/Gameplay/Ball/Ball.h"
#include "../../Header/Gameplay/Paddle.h"

using namespace sf;
using namespace Gameplay;

namespace Gameplay
{
    GameplayManager::GameplayManager()
    {
        initialize();
    }

    void GameplayManager::initialize()
    {
        // Example positions — you can modify them as needed
        float player1_position_x = 50.f;
        float player1_position_y = 250.f;
        float player2_position_x = 730.f;
        float player2_position_y = 250.f;

        ball = new Ball();
        player1 = new Paddle(player1_position_x, player1_position_y);
        player2 = new Paddle(player2_position_x, player2_position_y);
    }

    void GameplayManager::render(RenderWindow* game_window)
    {
        ball->render(game_window);
        player1->render(game_window);
        player2->render(game_window);
    }
}
