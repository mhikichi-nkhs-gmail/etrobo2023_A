#include "YPosition.h"

YPosition::YPosition():
    Measure(),
{
}

double YPosition::getValue()
{
    return XPosition;
}

void YPosition::update(double ypos)
{
    mYPosition = ypos;
}

void YPosition::reset()
{
    
}