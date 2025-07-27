#include "../../Header/Gameplay/Ball/Ball.h"
using namespace Gameplay;

Ball::Ball()
{
    Ball_Shape.setRadius(radius);
    Ball_Shape.setPosition(640 - radius, 360 - radius); 
    loadTexture();
    Ball_Shape.setTexture(&Pong_Ball_Texture);
}

void Ball::loadTexture()
{
    if (!Pong_Ball_Texture.loadFromFile(Texture_Path))
    {
        throw std::runtime_error("Failed to load ball texture at path: " + Texture_Path);
    }
}

void Ball::update()
{
   
}

void Ball::render(sf::RenderWindow* window)
{
    window->draw(Ball_Shape);
}
