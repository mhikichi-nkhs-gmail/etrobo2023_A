#include "Judge.h"

Judge::Judge():
    mState(INIT)
{
    
}

bool Judge::run()
{
    switch(mState){
        case INIT:
            init();
            break;
        case JUDGEMENT:
            bool result = judgement();
            return result;
    }
    return false;
}

void Judge::setparam(double param[])
{
    
}
void Judge::init()
{

    
}
bool Judge::judgement()
{
    return false;
}
