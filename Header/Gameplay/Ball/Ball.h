#pragma once
#include <SFML/Graphics.hpp>
#include <string>

namespace Gameplay
{
    class Ball
    {
    private:
        sf::CircleShape Ball_Shape;
        sf::Texture Pong_Ball_Texture;
        const std::string Texture_Path = "Assets/Textures/Ball.png";
        float radius = 15.0f;
        

    public:
        Ball();
        void update();
        void render(sf::RenderWindow* window);

    private:
        void loadTexture();
    };
}
