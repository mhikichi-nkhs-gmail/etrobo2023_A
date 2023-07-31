#ifndef __HSVHUE_H__
#define __HSVHUE_H__
#include "Measure.h"

class HsvHue : public Measure
{
    public:
        HsvHue();
        virtual double getValue();
        virtual void update(double h);

    private:
        double mHsvHue;
};

#endif

