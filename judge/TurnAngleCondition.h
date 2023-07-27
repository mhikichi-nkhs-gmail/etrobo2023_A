#ifndef TURNAMGLE_CONDITION
#define TURNAMGLE_CONDITION

#include "Judge.h"

class TurnAngleCondition : public Judge
{
    public:
        TurnAngleCondition();
        void setparam(double tucn);
        void init();
        bool judgement();
};
#endif