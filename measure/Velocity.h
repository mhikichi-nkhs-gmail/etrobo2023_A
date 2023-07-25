#ifndef __VELOCITY_H__
#define __VELOCITY_H__
#include "Measure.h"

#include "HackEv3.h"
#define M_PI 3.14159265358979323846

static const int MAX_CNT=25;  // 0.25s
static const double DELTA=0.01;

class Velocity : public Measure
{
    public:
        Velocity();
        double getValue();
        void update(double cnt1,double cnt2);
    private:
        double mVelocity;

        double mCounts1[MAX_CNT];
        double mCounts2[MAX_CNT];
        int mCounts_idx=0;

};

#endif

