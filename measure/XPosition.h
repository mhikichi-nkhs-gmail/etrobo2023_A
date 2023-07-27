#ifndef XPOSITION
#define XPOSITION
#include "Measure.h"

class XPosition : public Measure
{
    public:
        XPosition();
        virtual double getValue();
        virtual void update(double xpos);
        void reset();

    private:
        double mXPosition;
};

#endif