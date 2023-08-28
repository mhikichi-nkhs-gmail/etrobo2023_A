#ifndef MOTORMANAGER_
#define MOTORMANAGER_

#include <math.h>
#include "util.h"

#include "Motor.h"
#include "Odometry.h"

class MotorManager
{
    public:
		MotorManager(Motor *left,
			Motor *right);

	void setPwm(int left,int right);
	void init();

	private:
		Motor *mLeftMotor;
		Motor *mRightMotor;

		int32_t current_rs1;
		int32_t current_rs2;
	
		int32_t prev_rs1;
		int32_t prev_rs2;

};

#endif
