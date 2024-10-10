#include "Level.h"

Level::Level()
{

}

Level::~Level()
{

}

void Level::execute()
{
    snake.setInitialPosition(sf::Vector2f(100.f, 100.f));
    timer.restart();
    while (graphicsM->checkWindow())
    {
        graphicsM->clearWindow();
        sf::Event event;
        if(graphicsM->pollEvent(event))
            if (event.type == sf::Event::Closed)
                graphicsM->closeWindow();
            else if (event.type == sf::Event::KeyPressed)
                snake.setDirection();
        if (timer.getElapsedTime().asSeconds() > 0.5f)
        {
            snake.walk();
            snake.drawSnake();
            graphicsM->displayElements();
            timer.restart();
        }
    }
}

void Level::draw()
{
    snake.drawSnake();
}
