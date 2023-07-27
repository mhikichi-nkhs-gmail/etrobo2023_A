#ifndef DISTANCE_CONDITION
#define DISTANCE_CONDITION

#include "Judge.h"


class LengthCondition : public Judge
{
    public:
        LengthCondition();
        void setParam(double lencn[]);
        void init();
        bool judgement();

    private:
        double mLengthkids;
        bool mdirect;

};
#endif