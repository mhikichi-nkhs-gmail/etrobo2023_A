#ifndef TIME_CONDITION
#define TIME_CONDITION

#include "Judge.h"

class TimeCondition : public Judge
{
    public:
        TimeCondition();
        virtual void setparam(double ticn);
        virtual void init();
        virtual bool judgement();
};
#endif