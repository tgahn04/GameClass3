#include "Slime.h"
#include <iostream>

using namespace std;

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