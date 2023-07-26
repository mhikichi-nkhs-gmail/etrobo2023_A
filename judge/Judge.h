#ifndef JUDGE_
#define JUDGE_

#include "Measure.h"
#include "Odometry.h"

class Judge
{
    public:
        Judge();
        bool run();
        virtual void setparam(double param[]);
        virtual void init();
        virtual bool judgement();

    protected:
        //Length *mLength;
        //Brightness *mBrightness;
        //HsvHue *mHsvHue;
        //HsvSatu *mHsvSatu;
        //TurnAngle * TurnAngle;


        enum State {
            INIT,
            JUDGEMENT,
            END
        };

        State mState;

    private:

};

#endif