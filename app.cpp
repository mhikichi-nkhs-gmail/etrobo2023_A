// tag::walker_def[]
#include "app.h"
#include "util.h"

#include "Motor.h"

#include "Polling.h"
#include "MyColorSensor.h"
#include "Brightness.h"
#include "Length.h"
#include "TurnAngle.h"
#include "Odometry.h"
#include "HsvHue.h"
#include "HsvSatu.h"
#include "SimpleWalker.h"
#include "SpeedControl.h"
#include "LineTracer.h"

#include "Scene.h"
#include "MotorManager.h"

using namespace ev3api;

int log_max=30000;
int log_idx=0;

double msg_logbuf[30000][10];


Motor       *gLeftWheel = new Motor(PORT_C,false,LARGE_MOTOR);
Motor       *gRightWheel = new Motor(PORT_B,false,LARGE_MOTOR);
Motor       *gArm = new Motor(PORT_A,true,LARGE_MOTOR);

Polling *gPolling;
MyColorSensor *gColor;
Brightness *gBrightness;
HsvHue *gHsvHue;
HsvSatu *gHsvSatu;

Odometry *gOdo;
Length *gLength;
TurnAngle *gTurnAngle;

SpeedControl *gSpeed;
SimpleWalker *gWalker;
LineTracer *gTracer;

Scene *gScene;

MotorManager *gMotor;


static void user_system_create() {

  gBrightness = new Brightness();
  gHsvHue = new HsvHue();
  gHsvSatu = new HsvSatu();

  gColor = new MyColorSensor(PORT_2,gBrightness,gHsvHue,gHsvSatu);
  gLength = new Length();
  gTurnAngle = new TurnAngle();
  gMotor = new MotorManager(gLeftWheel, gRightWheel);

  gOdo = new Odometry(gLeftWheel,gRightWheel,gLength,gTurnAngle);
  gSpeed = new SpeedControl(gOdo);  
  gWalker = new SimpleWalker(gOdo,gSpeed); 
  gTracer = new LineTracer(gOdo,gSpeed);

  gPolling = new Polling(gColor,gOdo);

  gScene = new Scene();

}
static void user_system_destroy() {

  delete gColor;
  delete gPolling;
}


void main_task(intptr_t unused) {
  user_system_create();

  sta_cyc(POLLING_CYC);
  sta_cyc(TRACER_CYC);

  slp_tsk();

  stp_cyc(POLLING_CYC);
  stp_cyc(TRACER_CYC);

  gLeftWheel->setPWM(0);
  gRightWheel->setPWM(0);

  ext_tsk();

  user_system_destroy();
}
// end::main_task[]

void polling_task(intptr_t unused) {

  gPolling->run();

    Measure *m = gBrightness;
    double br = m->getValue(); 
    double len = gLength->getValue();
    double turn = gTurnAngle->getValue();
    double h = gHsvHue->getValue();
    double s = gHsvSatu->getValue();

    rgb_raw_t rgb = gColor->getRgb();
    static char buf[100];
    //sprintf(buf,"len , bri,H,S r,g,b, turn, v : %3.3f,  %7.4f,  %5.1f, %3.2f, %d,%d,%d  , %4.2f, %4.2f \n",len,br,h,s,  rgb.r, rgb.g,rgb.b ,turn,v);
    //msg_log(buf);
    //printf("h,s %f%f\n", h,s);

  ext_tsk();
}

void tracer_task(intptr_t unused) {

  if (ev3_button_is_pressed(BACK_BUTTON)) {
    wup_tsk(MAIN_TASK);  // 左ボタン押下でメインを起こす
  } else {

    // とりあえずここで、アームの固定。設計に基づいて変えるべし
    int arm_cnt = gArm->getCount();
   // syslog(LOG_NOTICE,"%d",arm_cnt);
    int diff = -50 - arm_cnt;
#if defined(MAKE_SIM)
    gArm->setPWM(diff*4.0);
#endif

    gScene->run();
  }

  ext_tsk();
}