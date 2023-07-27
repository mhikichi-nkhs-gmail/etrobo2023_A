#ifndef DISTANCE_CONDITION
#define DISTANCE_CONDITION

#include "Judge.h"

class LengthCondition : public Judge
{
    public:
        LengthCondition();
        void setparam(double dicn);
        void init();
        bool judgement();

};
#endif