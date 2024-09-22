#include "Entity.h"

Entity::Entity()
{

}

Entity::~Entity()
{

}

void Entity::setTexture(const string& path)
{
    if(!texture.loadFromFile(path))
        cout << "Error loading texture for Entity" << endl;
}
