#include "Golem.h"
#include <iostream>

using namespace std;

Golem::Golem()
{
	name = "Golem";
	health = 250;
	attack = 10;
	defense = 5;
}

void Golem::Describe()
{
	cout << "�Ŵ��� ������ ������� ��. �������� ���� �� �پ��, �� �� �����ϸ� ū ���ظ� �ش�." << endl;

	cout << endl;
}