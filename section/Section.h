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

        enum WALKER_NO{
            WALKER,
            TRACER
        };

        enum JUDGE_NO{
            LENGTH
            //COLOR,
            //BRIGHTNESS,
            //TURNANGLE,
            //TIME
        };
    protected:
        Walker *mWalker;
        Judge *mJudge;
        Judge *mMissJudge;

    private:

};

#endif
