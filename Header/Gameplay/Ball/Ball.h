#pragma once
#include <SFML/Graphics.hpp>
#include <string>

namespace Gameplay
{
    class Ball
    {
    private:
        sf::CircleShape ballShape;
        sf::Texture pong_ball_texture;
        const std::string texture_path = "Assets/Textures/Ball.png";
        float radius = 15.0f;
        

    public:
        Ball();
        void update();
        void render(sf::RenderWindow* window);

    private:
        void loadTexture();
    };
}
