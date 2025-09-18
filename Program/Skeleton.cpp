#include "Skeleton.h"
#include "stdafx.h"

Skeleton::Skeleton()
{
	name = "Skeleton";
	health = 100;
	attack = 5;
	defense = 1;
}

void Skeleton::Describe()
{
	cout << "뼈로 이루어진 언데드 전사. 방패나 무기로 공격해오며, 슬라임보다는 강하다." << endl;
	cout << endl;
}

Skeleton::~Skeleton()
{
	cout << "Destroy_Skeleton" << endl;
}