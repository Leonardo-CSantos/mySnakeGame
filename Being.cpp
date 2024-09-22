#include "Being.h"

int Being::id_count(1);

Being::Being() :
    graphicsM(graphicsM->getInstance()), id(id_count++)
{

}

Being::~Being()
{
    graphicsM = nullptr;
}
