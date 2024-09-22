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
    };
    class SnakeBody : public Entity
    {
    private:

    public:
        SnakeBody();
        ~SnakeBody();
        void setBody();
    };
    //SnakeHead snakeHead;
    //myList<SnakeBody> snakeBody();
    int snakeSize;
    enum headDirection {left, right, up, down};

public:
    Snake();
    ~Snake();

    void setPosition();
};
