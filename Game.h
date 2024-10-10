#pragma once
#include <SFML/Graphics.hpp>
#include "Level.h"

class Game
{
private:
    Level level;

public:
    Game ();
    ~Game ();
    void execute();
};
