#ifndef COLOR_CONDITION
#define COLOR_CONDITION

#include "Judge.h"

class ColorCondition : public Judge
{
    public:
        ColorCondition();
        virtual void setparam(double cocn);
        virtual void init();
        virtual bool judgement();

};
#endif