#ifndef DISTANCE_CONDITION
#define DISTANCE_CONDITION

#include "Judge.h"

class DistanceCondition : public Judge
{
    public:
        DistanceCondition();
        virtual void setparam(double dicn);
        virtual void init();
        virtual bool judgement();

};
#endif