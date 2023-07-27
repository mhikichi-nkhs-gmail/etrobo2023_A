#ifndef BRIGHTNESS_CONDITION
#define BRIGHTNESS_CONDITION

#include "Judge.h"

class BrightnessCondition : public Judge
{
    public:
        BrightnessCondition();
        void setparam(double brcn);
        void init();
        bool judgement();   
};
#endif