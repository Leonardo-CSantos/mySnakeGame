#pragma once

#include "Being.h"
#include "myList.h"
#include "Snake.h"
#include "Food.h"

#include <iostream>

class Level : public Being
{
private:
    Snake snake;
    //Food food;
    sf::Clock timer;

public:
    Level();
    ~Level();

    void execute();
    void draw();
};
