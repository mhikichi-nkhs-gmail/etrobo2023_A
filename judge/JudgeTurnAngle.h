#ifndef JUDGE_TURNANGLE
#define JUDGE_TURNANGLE

#include "Judge.h"

class JudgeTurnAngle : public Judge
{
    public:
        JudgeTurnAngle();
        void setParam(double tucn[]);
        void init();
        bool judgement();

    private:
        double mTurnkids;
        bool mdirect;
};
#endif