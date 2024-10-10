#pragma once
#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 600

namespace Managers
{
    class GraphicsManager
    {
    private:
        sf::RenderWindow* gameWindow;
        static GraphicsManager* instance; //Using Singleton
        GraphicsManager();

    public:
        ~GraphicsManager();
        GraphicsManager* getInstance();
        void clearWindow();
        bool pollEvent(sf::Event& event);
        void drawElement(sf::RectangleShape element);
        void displayElements();
        void closeWindow();
        bool checkWindow() const;
    };
} using namespace Managers;
