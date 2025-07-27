
#pragma once
#include "../../Header/Gameplay/Paddle.h"
#include "../../Header/Gameplay/Ball/Ball.h"
#include "../../Header/Event/EventManager.h"

namespace Gameplay
{
    class GameplayManager {
    private:
        void initialize();

        float player1_position_x = 40.0f;
        float player1_position_y = 300.0f;

        float player2_position_x = 1210.0f;
        float player2_position_y = 300.0f;

        GameEvent::EventManager* event_manager;

    public:
        GameplayManager(GameEvent::EventManager* manager);
        void update();
        void render(sf::RenderWindow* game_window);

        Ball* ball;
        Paddle* player1;
        Paddle* player2;
    };
}
