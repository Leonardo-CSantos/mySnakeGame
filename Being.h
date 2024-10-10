#pragma once
#include "GraphicsManager.h"
#include <iostream>
using namespace std;

class Being
{
protected:
    int id;
    static int id_count;
    GraphicsManager* graphicsM;

public:
    Being ();
    ~Being ();
    virtual void draw () = 0;
};
