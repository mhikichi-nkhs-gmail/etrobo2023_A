#include "Measure.h"

Measure::Measure()
{
    mLpf = new LowPassFilter();
}

double Measure::getValue()
{
    return 0;
}