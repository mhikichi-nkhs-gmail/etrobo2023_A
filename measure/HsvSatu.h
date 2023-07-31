#ifndef __HSVSATU_H__
#define __HSVSATU_H__
#include "Measure.h"

class HsvSatu : public Measure
{
    public:
        HsvSatu();
        virtual double getValue();
        virtual void update(double s);

    private:
        double mHsvSatu;
};

#endif
