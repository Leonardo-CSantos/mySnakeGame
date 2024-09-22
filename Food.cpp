#include "Food.h"

Food::Food()
{

}

Food::~Food()
{

}

void Food::setBody()
{
    body = sf::RectangleShape(sf::Vector2f(25.f, 25.f));
    body.setFillColor(sf::Color::Red);
}
