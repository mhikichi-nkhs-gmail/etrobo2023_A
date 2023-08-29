#include "MotorManager.h"
#include "Walker.h"

extern Motor *gLeftWheel;
extern Motor *gRightWheel;
double mlCount;
double mrCount;

MotorManager::MotorManager(Motor *left, Motor *right):
	mLeftMotor(left),
	mRightMotor(right)
{
}

void MotorManager::setPwm(int left,int right)
{
	mLeftMotor->setPWM(left);
	mRightMotor->setPWM(right);
	
	printf("left,,%d\n", left);
	printf("right,,%d\n", right);

	if(left != 0 && right != 0)
	{
		current_lmotor = mLeftMotor->getCount();
		current_rmotor = mRightMotor->getCount();

		if(current_lmotor == prev_lmotor)
		{
			if(mlCount >= 10)
			{
				if(current_lmotor >= 0)
				{
					mLeftMotor->setPWM(90);
				}
				else
				{
					mLeftMotor->setPWM(-90);
				}
			}
			else
			{
				mlCount = mlCount + 1.0;
				//printf("mlc,,%f\n", mlCount);
			}
		}
		else
		{
			prev_lmotor = current_lmotor;
			mlCount = 0.0;
		}

		if(current_rmotor == prev_rmotor)
		{
			if(mrCount >= 10)
			{
				if(current_rmotor >= 0)
				{
					mRightMotor->setPWM(90);
				}
				else
				{
					mRightMotor->setPWM(-90);
				}
				
			}
			else
			{
				mrCount = mrCount + 1.0;
				//printf("mrc,,%f\n", mrCount);
			}
		}
		else
		{
			prev_rmotor = current_rmotor;
			mrCount = 0.0;
		}
	}
}

void MotorManager::init()
{
	mlCount = 0.0;
	mrCount = 0.0;
	prev_lmotor = mLeftMotor->getCount();
	prev_rmotor = mRightMotor->getCount();
}
	

	//printf("lmotor,,%f\n", lmotor);
	//printf("rmotor,,%f\n", rmotor);





