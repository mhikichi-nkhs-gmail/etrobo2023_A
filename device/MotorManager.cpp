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
	double mTime = 0.0;
	current_lmotor = mLeftMotor->getCount();
	current_rmotor = mRightMotor->getCount();
	
	if(left != 0)
	{
		if(current_lmotor == prev_lmotor)
		{
			if(mlCount >= 200)
			{
				if(current_lmotor >= 0)
				{
					setleft = 90;
				}
				else
				{
					setleft = -90;
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
			if(mrCount >= 200)
			{
				if(current_rmotor >= 0)
				{
					setright = 90;
				}
				else
				{
					setright = -90;
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

	if(mlCount == 200 && mrCount == 200)
	{
		while(mTime < 20)
		{
			mLeftMotor->setPWM(setleft);
			mRightMotor->setPWM(setright);
			mTime = mTime + 1.0;
		}
	}
	else  
	{
		mTime = 0.0;
	}

	mLeftMotor->setPWM(left);
	mRightMotor->setPWM(right);

/*
		if(mlCount == 200)
		{
			mLeftMotor->setPWM(setleft);
		}
		else
		{
			mLeftMotor->setPWM(left);
		}

		if(mrCount == 200)
		{
			mRightMotor->setPWM(setright);
		}
		else
		{
			mRightMotor->setPWM(right);
		}
	*/
	
	prev_lmotor = current_lmotor;
	prev_rmotor = current_rmotor;
		
	//mLeftMotor->setPWM(left);
	//mRightMotor->setPWM(right);
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


