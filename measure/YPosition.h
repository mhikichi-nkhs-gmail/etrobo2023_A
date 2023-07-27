#ifndef YPOSITION
#define YPOSITION
#include "Measure.h"

class YPosition : public Measure
{
    public:
        YPosition();
        virtual double getValue();
        virtual void update(double ypos);
        void reset();

    private:
        double mYPosition;
};

#endif