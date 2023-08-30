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
	int setleft;
	int setright;
	current_lmotor = mLeftMotor->getCount();
	current_rmotor = mRightMotor->getCount();
	/*
	if(left != 0)
	{
		if(current_lmotor == prev_lmotor)
		{
			if(mlCount >= 300)
			{
				if(current_lmotor >= 0)
				{
					setleft = 70;
				}
				else
				{
					setleft = -70;
				}
			} 
			else
			{
				mlCount = mlCount + 1.0;
			}
		}
		else
		{
			//prev_lmotor = current_lmotor;
			mlCount = 0.0;
		}
	}

	if(right != 0)
	{
		if(current_rmotor == prev_rmotor)
		{
			if(mrCount >= 300)
			{
				if(current_rmotor >= 0)
				{
					setright = 70;
				}
				else
				{
					setright = -70;
				}
			} 
			else
			{
				mrCount = mrCount + 1.0;
			}
		}
		else
		{
			//prev_rmotor = current_rmotor;
			mrCount = 0.0;
		}

	}

	if(mlCount == 300)
		{
			mLeftMotor->setPWM(setleft);
		}
		else
		{
			mLeftMotor->setPWM(left);
		}

		if(mrCount == 300)
		{
			mRightMotor->setPWM(setright);
		}
		else
		{
			mRightMotor->setPWM(right);
		}
		prev_lmotor = current_lmotor;
		prev_rmotor = current_rmotor;
		*/
	mLeftMotor->setPWM(left);
	mRightMotor->setPWM(right);
}
/*
void MotorManager::init()
{
	mlCount = 0.0;
	mrCount = 0.0;
	prev_lmotor = mLeftMotor->getCount();
	prev_rmotor = mRightMotor->getCount();
}
*/


