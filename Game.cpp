#include "Game.h"

Game::Game ()
{
    execute();
}

Game::~Game ()
{

}

void Game::execute()
{
    level.execute();
}
