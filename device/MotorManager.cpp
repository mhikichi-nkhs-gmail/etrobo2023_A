#include "MotorManager.h"
#include "Walker.h"

extern Motor *gLeftWheel;
extern Motor *gRightWheel;

MotorManager::MotorManager(Motor *left, Motor *right):
	mLeftMotor(left),
	mRightMotor(right)
{
}
void MotorManager::setPwm(int left,int right)
{
	mLeftMotor->setPWM(left);
	mRightMotor->setPWM(right);

	current_lmotor = mLeftMotor->getCount();
	current_rmotor = mRightMotor->getCount();

	prev_lmotor = current_lmotor;
	prev_rmotor = current_rmotor;

	current_lmotor = mLeftMotor->getCount();

	if(current_lmotor == prev_lmotor)
	{
		if(mlCount >= 500.0)
		{
			mLeftMotor->setPWM(90);
			printf("ABCD\n");
		}
		else
		{
			mlCount = mlCount + 1.0;
			printf("mlc,,%f\n", mlCount);
		}
	}
	else
	{
		prev_lmotor = current_lmotor;
		mlCount = 0.0;
	}
	current_rmotor = mRightMotor->getCount();

	if(current_rmotor == prev_rmotor)
	{
		if(mrCount >= 500.0)
		{
			mRightMotor->setPWM(90);
			printf("HIJK\n");
		}
		else
		{
			mrCount = mrCount + 1.0;
			printf("mrc,,%f\n", mrCount);
		}
	}
	else
	{
		prev_rmotor = current_rmotor;
		mrCount = 0.0;
	}
}

void MotorManager::init()
{
	double mlCount = 0.0;
	double mrCount = 0.0;
}
	

	//printf("lmotor,,%f\n", lmotor);
	//printf("rmotor,,%f\n", rmotor);





