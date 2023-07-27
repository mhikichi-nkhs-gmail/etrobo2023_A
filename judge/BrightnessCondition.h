#ifndef BRIGHTNESS_CONDITION
#define BRIGHTNESS_CONDITION

#include "Judge.h"

class BrightnessCondition : public Judge
{
    public:
        BrightnessCondition();
        virtual void setparam(double brcn);
        virtual void init();
        virtual bool judgement();   
};
#endif