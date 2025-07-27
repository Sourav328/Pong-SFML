#pragma once
#include <SFML/Graphics.hpp>
#include <string>

using namespace sf;
using namespace std;

namespace Gameplay {
    class Paddle {
    private:
        RectangleShape paddle_sprite;
        float paddle_width = 20.f;
        float paddle_height = 100.f;

        Texture Paddle_texture;
        string texture_path = "Assets/Textures/Paddle.png";

    public:
        Paddle();
        Paddle(float position_x, float position_y);
        void update(bool move_up, bool move_down);
        void render(RenderWindow* game_window);

    private:
        void loadTexture();
    };
}