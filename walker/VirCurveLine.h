#ifndef VIRCURVELINE
#define VIRCURVELINE

#include "SimpleWalker.h"
#include "Odometry.h"
#include "SpeedControl.h"
#include "PID.h"

class VirCurveLine : public SimpleWalker 
{
    public:
        VirCurveLine(Odometry *odo,
            SpeedControl *scon);
        void run();
        void setParam(double vcurve[]);
        void setEdgeMode(bool isLeftEdge);
        bool getEdgeMode();
        void changeEdgeMode();
        void setLimit(double limit);

        bool isLeftEdge();
  
        void setBias(double curve);
        void addBias(double add);

        void printInfo();
        void init();
        void execStart();

    protected:

    private:
        double calcTurn();
        void calcSenter();
        void calcLength();
        void calcSenoer();

        double mSpeed;

        double mradius;
        double maddsensor;
        double R;
        double mx;
        double my;
        double xsensor;
        double ysensor;
        double centerx;
        double centery;

        int mTargetSpeed;
        double mTarget;
        double mPFactor;
        double mIFactor;
        double mDFactor;

        double mAngleKp;
        bool mLeftEdge;
        double mCurve;


        double mBias;

        int mLimit;  

        
};

#endif  
