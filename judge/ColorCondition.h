#ifndef COLOR_CONDITION
#define COLOR_CONDITION

#include "Judge.h"

class ColorCondition : public Judge
{
    public:
        ColorCondition();
        void setparam(double cocn);
        void init();
        bool judgement();

};
#endif