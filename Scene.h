#ifndef _SCENE_H_
#define _SCENE_H_

#include "SpeedSectionManager.h"
#include "ColorSensor.h"
#include "MyColorSensor.h"
#include "DoubleSection.h"



class Scene{
    public:
        Scene();
        bool run();
        void execUndefined();
        void execCalibration();
        void execStart();
        void execSpeed();
        void execDoubleloop();
        //void execBingo();
        //void execGarage();

    private:
        enum State {
            UNDEFINED,
            CALIBRATION,
            START,
            SPEED,
            DOUBLELOOP,
            //BINGO,
            //GARAGE,
            END
        };

        State mState;

        SpeedSectionManager *mSsm;

        ColorSensor *mColor;

        DoubleSection *mBs;

        
};
#endif
