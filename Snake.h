#pragma once
#include "Entity.h"
#include "myList.h"

class Snake
{
private:
    class SnakeHead : public Entity
    {
    private:

    public:
        SnakeHead();
        ~SnakeHead();
        void setBody();
        void draw();
    };
    class SnakeBody : public Entity
    {
    private:

    public:
        SnakeBody();
        ~SnakeBody();
        void setBody();
        void draw();
    };
    SnakeHead snakeHead;
    myList<SnakeBody> snakeBody;
    int snakeSize;
    enum headDirection {left, right, up, down};
    headDirection headDirection;

public:
    Snake();
    ~Snake();

    void setInitialPosition(sf::Vector2f initialPosition);
    void setDirection();
    void walk();
    void drawSnake();
};
