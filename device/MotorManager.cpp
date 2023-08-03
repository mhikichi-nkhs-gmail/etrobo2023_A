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
}


