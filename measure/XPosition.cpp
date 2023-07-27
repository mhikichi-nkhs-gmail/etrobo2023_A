#include "XPosition.h"

XPosition::XPosition(): 
    Measure()
{
}

double XPosition::getValue()
{
    return mXPosition;
}

void XPosition::update(double xpos)
{
    mXPosition = xpos;
}

void XPosition::reset()
{

}