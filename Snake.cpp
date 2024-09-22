#include "Snake.h"

Snake::SnakeHead::SnakeHead()
{
}

Snake::SnakeHead::~SnakeHead()
{

}

void Snake::SnakeHead::setBody()
{
    body = sf::RectangleShape(sf::Vector2f(50.f, 50.f));
    body.setFillColor(sf::Color::Cyan);
}

Snake::SnakeBody::SnakeBody()
{

}

Snake::SnakeBody::~SnakeBody()
{

}

void Snake::SnakeBody::setBody()
{
    body = sf::RectangleShape(sf::Vector2f(50.f, 50.f));
    body.setFillColor(sf::Color::Green);
}

Snake::Snake()
{

}

Snake::~Snake()
{

}

void Snake::setPosition()
{

}
