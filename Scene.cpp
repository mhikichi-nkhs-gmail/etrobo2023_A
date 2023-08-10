#include "Scene.h"

#include "ev3api.h"

Scene::Scene():
    mState(UNDEFINED)
{
    mSsm = new SpeedSectionManager();
}

bool Scene::run()
{
    switch(mState) {
        case UNDEFINED:
            execUndefined();
            break;
        case START:
            execStart();
            break;
        case SPEED:
            execSpeed();
            break;
        case BINGO:
            execBingo();
            break;
        case GARAGE:
            execGarage();
            break;
        default:
            return true;
    }
    return false;
}

void Scene::execUndefined()
{
    mState=START;
    printf("AAAAAA\n");

}
void Scene::execStart()
{
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    if(ev3_button_is_pressed(LEFT_BUTTON))
    {
        mSsm->course(0);
        //printf("left\n");
    }
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    if(ev3_button_is_pressed(RIGHT_BUTTON))
    {
        mSsm->course(1);
        //printf("right\n");
    }

#if defined(MAKE_SIM)
// とりあえず動かすだけなので、設計に基づいて書き直そう
    //msg_log("Press Touch Button to start.");
    ev3_sensor_config(EV3_PORT_1, TOUCH_SENSOR);
    if (ev3_touch_sensor_is_pressed(EV3_PORT_1) == 1)
    {
            mState=SPEED;
    }
#else
    if (ev3_button_is_pressed(ENTER_BUTTON))
    {
            mState=SPEED;
    }
#endif
    
}
void Scene::execSpeed()
{
    if(mSsm->run()) {
        delete mSsm;
        mState = END;
    }
}
void Scene::execBingo()
{

}
void Scene::execGarage()
{

}
