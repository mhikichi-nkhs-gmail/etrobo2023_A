#include "Scene.h"
#include "MyColorSensor.h"

#include "ev3api.h"

extern MyColorSensor *gColor;
        
extern Brightness *gBrightness;

extern HsvHue *gHsvHue;

extern HsvSatu *gHsvSatu;

Scene::Scene():
    mState(UNDEFINED)
{

    gColor = new MyColorSensor(PORT_2,gBrightness,gHsvHue,gHsvSatu);
    mSsm = new SpeedSectionManager();
    printf("作った\n");
}

bool Scene::run()
{
    switch(mState) {
        case UNDEFINED:
            execUndefined();
            break;
        /*
        case CALIBRATION:
            execCalibration();
            break;
        */
        case START:
            execStart();
            break;
        case SPEED:
            execSpeed();
            break;
        case DOUBLELOOP:
            execDoubleloop();
            break;
        /*
        case BINGO:
            execBingo();
            break;
        case GARAGE:
            execGarage();
            break;
        */
        default:
            return true;
    }
    return false;
}

void Scene::execUndefined()
{
    printf("Undefined_Start\n");
    mState=START;
    //mState=CALIBRATION;
    printf("Undefined_Finish\n");

}
/*
void Scene::execCalibration()
{
    printf("Calibration_Start\n");
    gColor->setRGB();
#if defined(MAKE_SIM)
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    if (ev3_button_is_pressed(LEFT_BUTTON))
    {
        mState=START;
        printf("Calibration_Finish\n");
    }
#else
    if(ev3_button_is_pressed(LEFT_BUTTON))
    {
        mState=START;
        printf("Calibration_Finish\n");
    }
#endif

}
*/
void Scene::execStart()
{
    //printf("Start_Start\n");
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    if(ev3_button_is_pressed(LEFT_BUTTON))
    {
        mSsm->course(0);
        printf("left\n");
        gColor->setRGB();
    }
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    if(ev3_button_is_pressed(RIGHT_BUTTON))
    {
        mSsm->course(1);
        printf("right\n");
        gColor->setRGB();
    }

#if defined(MAKE_SIM)
// とりあえず動かすだけなので、設計に基づいて書き直そう
    //msg_log("Press Touch Button to start.");
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    if (ev3_touch_sensor_is_pressed(EV3_PORT_1) == 1)
    {
        printf("mState=SPEED\n");
            mState=SPEED;
    }
#else
    if (ev3_button_is_pressed(ENTER_BUTTON))
    {
        printf("mState=SPEED\n");
            mState=SPEED;
    }
#endif
printf("Start_Finish\n");
}
void Scene::execSpeed()
{
    //printf("Speed_Start\n");
    if(mSsm->run()) {
        delete mSsm;
        mState=DOUBLELOOP;
        //mState = END;
    }
    //printf("Speed_Finish\n");
}
void Scene::execDoubleloop()
{
    if(mBs->run())
    {
        delete mBs;
        mState=END;
    }
}
/*void Scene::execBingo()
{

}
void Scene::execGarage()
{

}
*/