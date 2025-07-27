#include "../../Header/Gameplay/Ball/Ball.h"


using namespace Gameplay;

Ball::Ball()
{
    ballShape.setRadius(radius);
    ballShape.setPosition(640 - radius, 360 - radius); // Centered
    loadTexture();
    ballShape.setTexture(&pong_ball_texture);
}

void Ball::loadTexture()
{
    if (!pong_ball_texture.loadFromFile(texture_path))
    {
        throw std::runtime_error("Failed to load ball texture at path: " + texture_path);
    }
}

void Ball::update()
{
   
}

void Ball::render(sf::RenderWindow* window)
{
    window->draw(ballShape);
}
