#ifndef JUDGE_
#define JUDGE_

#include "Measure.h"
#include "Odometry.h"
#include "Brightness.h"
#include "HsvHue.h"
#include "HsvSatu.h"
#include "Length.h"
#include "TurnAngle.h"
#include "XPosition.h"
#include "YPosition.h"

class Judge
{
    public:
        Judge();
        bool run();
        virtual void setParam(double param[]);
        virtual void init();
        virtual bool judgement();
        static double MEMOLEN;
        static double MEMOANG;

    protected:

        Length *mLength;
        Brightness *mBrightness;
        HsvHue *mHsvHue;
        HsvSatu *mHsvSatu;
        TurnAngle *mTurnAngle;
        //XPosition *mXPosition;
        //YPosition *mYposition;

        enum State {
            INIT,
            JUDGEMENT,
            END
        };

        State mState;

    private:

};

#endif