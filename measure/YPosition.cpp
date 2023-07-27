#include "YPosition.h"

YPosition::YPosition():
    Measure()
{
}

double YPosition::getValue()
{
    return mYPosition;
}

void YPosition::update(double ypos)
{
    mYPosition = ypos;
}

void YPosition::reset()
{

}