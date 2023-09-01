#ifndef JUDGE_RECEPTION
#define JUDGE_RECEPTION

#include "Judge.h"
#include "Section.h"

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