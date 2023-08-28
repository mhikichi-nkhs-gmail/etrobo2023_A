#ifndef JUDGE_RECEPTION
#define JUDGE_RECEOTION

#include "Judge.h"


class JudgeReception : public Judge
{
    public:
        JudgeReception();
        void init();
        bool judgement();
        void reception(char result[]);
        void measureTime();
        void setParam(double recn[]);
        

    private:
        

};
#endif