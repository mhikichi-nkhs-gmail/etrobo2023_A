#ifndef ODOMETRY_
#define ODOMETRY_

#include <math.h>
#include "util.h"

#include "Motor.h"
#include "Length.h"
#include "TurnAngle.h"

using namespace ev3api;

class Odometry
{
public:
	Odometry(Motor *left,
			Motor *right,
			Length *len,
			TurnAngle *angle);
	void update();
	void calc();
	void reset();
	void resetLength();
	void resetAngle();
	void setPwm(int left,int right);

private:
	Motor *mLeftMotor;
	Motor *mRightMotor;
	Length *mLength;
	TurnAngle *mTurnAngle;

	int32_t current_rs1;
	int32_t current_rs2;
	
	int32_t prev_rs1;
	int32_t prev_rs2;

	double x;
	double y;

	double th;
	double rot;
	double dt;

	double deg;
	
	double sumx;
	double sumy;
	double sumth;
	double sumlen;


};

#endif
