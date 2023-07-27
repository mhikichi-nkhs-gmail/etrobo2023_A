#ifndef TIME_CONDITION
#define TIME_CONDITION

#include "Judge.h"

class TimeCondition : public Judge
{
    public:
        TimeCondition();
        void setParam(double ticn);
        void init();
        bool judgement();
};
#endif