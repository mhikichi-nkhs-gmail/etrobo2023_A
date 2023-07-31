#ifndef _SECTION_H_
#define _SECTION_H_

#include "LineTracer.h"
#include "SimpleWalker.h"

#include "Walker.h"
#include "Judge.h"
#include "JudgeLength.h"
#include "JudgeBrightness.h"
#include "JudgeColor.h"
#include "JudgeTime.h"
#include "JudgeTurnAngle.h"


class Section {
    public:

        Section();
        ~Section();
        virtual bool run();
        Walker *selectWalker(int no);
        Judge *selectJudge(int no);
        //EmgJudge *selectEmgJudge(int no);

        enum WALKER_NO{
            WALKER,
            TRACER,
            WANONE
        };

        enum JUDGE_NO{
            LENGTH,
            COLOR,
            //BRIGHTNESS,
            //TURNANGLE,
            //TIME
            JUNONE
        };

        enum EMGJUDGE_NO{
            EMNONE
        };

        enum FLAG_NO{
            FLNONE

        };




    protected:
        Walker *mWalker;
        Judge *mJudge;
        Judge *mMissJudge;

    private:

};

#endif
