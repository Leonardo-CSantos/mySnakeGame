#pragma once
#include "Being.h"

class Entity : public Being
{
protected:
    sf::RectangleShape body;
    sf::Texture texture;
    sf::Vector2f position;
public:
    Entity();
    ~Entity();

    void setTexture (const string& path);
    virtual void setBody() = 0;
    sf::RectangleShape* getBody();
};
