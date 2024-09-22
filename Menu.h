#pragma once
#include "myList.h"
#include "Being.h"

class Menu : public Being
{
private:
    sf::Texture backGround;
    myList<sf::Text> options;
    int n_options;
    int selectedOption;
    bool start;

public:
    Menu();
    ~Menu();
    bool getStart() const;
    void selectOption();
    void draw();
};
