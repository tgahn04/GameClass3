#include "Slime.h"
#include "stdafx.h"

Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;
}

void Slime::Describe()
{
	cout << "���������� ���� ����. ���ݷ��� �������� ���ڰ� ���� �������� �����ϴ�." << endl;
	cout << endl;
}

Slime::~Slime()
{
	cout << "Destroy_Slime" << endl;
}