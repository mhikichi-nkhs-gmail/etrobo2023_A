#ifndef TURNAMGLE_CONDITION
#define TURNAMGLE_CONDITION

#include "Judge.h"

class TurnAngleCondition : public Judge
{
    public:
        TurnAngleCondition();
        virtual void setparam(double tucn);
        virtual void init();
        virtual bool judgement();
};
#endif