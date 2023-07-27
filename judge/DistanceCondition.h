#ifndef DISTANCE_CONDITION
#define DISTANCE_CONDITION

#include "Judge.h"

class DistanceCondition : public Judge
{
    public:
        DistanceCondition();
        void setparam(double dicn);
        void init();
        bool judgement();

};
#endif