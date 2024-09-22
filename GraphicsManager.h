#pragma once
#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

namespace Managers
{
    class GraphicsManager
    {
    private:
        sf::RenderWindow gameWindow;
        static GraphicsManager* instance; //Using Singleton
        GraphicsManager();

    public:
        ~GraphicsManager();
        GraphicsManager* getInstance();
        void clearWindow();
        void showElements();
        void closeWindow();
        bool checkWindow() const;
    };
} using namespace Managers;
