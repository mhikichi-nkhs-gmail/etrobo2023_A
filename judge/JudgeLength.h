#ifndef JUDGE_LENGTH
#define JUDGE_LENGTH

#include "Judge.h"


class JudgeLength : public Judge
{
    public:
        JudgeLength();
        void setParam(double lencn[]);
        void init();
        bool judgement();

    private:
        double mLengthkids;
        bool mdirect;

};
#endif