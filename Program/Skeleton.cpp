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
	cout << "���� �̷���� �𵥵� ����. ���г� ����� �����ؿ���, �����Ӻ��ٴ� ���ϴ�." << endl;
	cout << endl;
}

Skeleton::~Skeleton()
{
	cout << "Destroy_Skeleton" << endl;
}