#ifndef __MEASURE_H__
#define __MEASURE_H__

#include "LowPassFilter.h"

class Measure
{
    public:
        Measure();
        double getValue();

    protected:
            LowPassFilter *mLpf;

    private:

};

#endif

