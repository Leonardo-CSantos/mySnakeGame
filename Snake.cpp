#include "Snake.h"

Snake::SnakeHead::SnakeHead()
{
    setBody();
}

Snake::SnakeHead::~SnakeHead()
{

}

void Snake::SnakeHead::setBody()
{
    body = sf::RectangleShape(sf::Vector2f(10.f, 10.f));
    body.setFillColor(sf::Color::Cyan);
}

void Snake::SnakeHead::draw()
{
    graphicsM->drawElement(this->body);
}

Snake::SnakeBody::SnakeBody()
{
    setBody();
}

Snake::SnakeBody::~SnakeBody()
{

}

void Snake::SnakeBody::setBody()
{
    body = sf::RectangleShape(sf::Vector2f(10.f, 10.f));
    body.setFillColor(sf::Color::Green);
}

void Snake::SnakeBody::draw()
{
    graphicsM->drawElement(this->body);
}

Snake::Snake()
{
    SnakeBody* bodyAux = new SnakeBody();
    snakeBody.pushBack(bodyAux);
}

Snake::~Snake()
{

}

void Snake::setInitialPosition(sf::Vector2f initialPosition)
{
    snakeHead.getBody()->setPosition(initialPosition);
    initialPosition.x = initialPosition.x - snakeHead.getBody()->getSize().x;
    SnakeBody* bodyAux = snakeBody.getData(0);
    bodyAux->getBody()->setPosition(initialPosition);
    headDirection  = right;
}

void Snake::setDirection()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A) && headDirection != right)
        headDirection = left;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D) && headDirection != left)
        headDirection = right;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W) && headDirection != down)
        headDirection = up;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S) && headDirection != up)
        headDirection = down;
}

void Snake::walk()
{
    for (int i = snakeBody.getLength(); i > 1; i--)
    {
        SnakeBody* bodyAux1 = snakeBody.getData(i-1);
        SnakeBody* bodyAux2 = snakeBody.getData(i-2);
        bodyAux1->getBody()->setPosition(bodyAux2->getBody()->getPosition());
    }
    SnakeBody* bodyAux = snakeBody.getData(0);
    bodyAux->getBody()->setPosition(snakeHead.getBody()->getPosition());

    sf::Vector2f headPosition = snakeHead.getBody()->getPosition();

    if (headDirection == left)
        headPosition.x -= snakeHead.getBody()->getSize().x;
    else if (headDirection == right)
        headPosition.x += snakeHead.getBody()->getSize().x;
    else if (headDirection == up)
        headPosition.y -= snakeHead.getBody()->getSize().y;
    else if (headDirection == down)
        headPosition.y += snakeHead.getBody()->getSize().y;

    snakeHead.getBody()->setPosition(headPosition);
}

void Snake::drawSnake()
{
    snakeHead.draw();
    int length = snakeBody.getLength();
    for (int i = 0; i < length; i++)
    {
        SnakeBody* bodyAux = snakeBody.getData(i);
        bodyAux->draw();
    }
}
