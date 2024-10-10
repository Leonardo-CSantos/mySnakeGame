#include "GraphicsManager.h"

GraphicsManager* GraphicsManager::instance(nullptr);

GraphicsManager::GraphicsManager()
{
    gameWindow = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Snake Game");
    gameWindow->setFramerateLimit(30);
}

GraphicsManager::~GraphicsManager()
{
    if (gameWindow != nullptr)
        delete gameWindow;
    gameWindow = nullptr;
}

GraphicsManager* GraphicsManager::getInstance()
{
    if (instance == nullptr)
        instance = new GraphicsManager();

    return instance;
}

void GraphicsManager::clearWindow()
{
    gameWindow->clear();
}

bool GraphicsManager::pollEvent(sf::Event& event)
{
    return gameWindow->pollEvent(event);
}

void GraphicsManager::drawElement(sf::RectangleShape element)
{
    gameWindow->draw(element);
}

void GraphicsManager::displayElements()
{
    gameWindow->display();
}

void GraphicsManager::closeWindow()
{
    gameWindow->close();
}

bool GraphicsManager::checkWindow() const
{
    return gameWindow->isOpen();
}
