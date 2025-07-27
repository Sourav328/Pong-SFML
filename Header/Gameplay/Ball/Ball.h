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
        sf::Vector2f velocity = { 5.f, 5.f };

    public:
        Ball();
        void update();
        void render(sf::RenderWindow* window);

    private:
        void loadTexture();
    };
}
