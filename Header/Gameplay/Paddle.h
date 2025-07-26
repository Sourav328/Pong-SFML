#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
namespace Gameplay
{
    class Paddle
    {
        private:
            RectangleShape paddle_sprite;
            float paddle_width = 20.f;
            float paddle_height = 100.f;

        public:
            Paddle(float position_x, float position_y);
            void render(RenderWindow* game_window);
    };
}
