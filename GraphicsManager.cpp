#include "GraphicsManager.h"

GraphicsManager* GraphicsManager::instance(nullptr);

GraphicsManager::GraphicsManager():
    gameWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Snake Game")
{

}

GraphicsManager::~GraphicsManager()
{

}

GraphicsManager* GraphicsManager::getInstance()
{
    if (instance == nullptr)
        instance = new GraphicsManager();

    return instance;
}

void GraphicsManager::clearWindow()
{
    gameWindow.clear();
}

void GraphicsManager::showElements()
{
    gameWindow.display();
}

void GraphicsManager::closeWindow()
{
    gameWindow.close();
}

bool GraphicsManager::checkWindow() const
{
    return gameWindow.isOpen();
}
