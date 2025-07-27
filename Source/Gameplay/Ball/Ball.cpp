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
    ballShape.move(velocity);

    sf::Vector2f pos = ballShape.getPosition();

    if (pos.x <= 0 || pos.x + 2 * radius >= 1280)
        velocity.x = -velocity.x;

    if (pos.y <= 0 || pos.y + 2 * radius >= 720)
        velocity.y = -velocity.y;
}

void Ball::render(sf::RenderWindow* window)
{
    window->draw(ballShape);
}
