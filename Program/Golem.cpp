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
	cout << "거대한 바위로 만들어진 골렘. 느리지만 힘과 방어가 뛰어나며, 한 번 공격하면 큰 피해를 준다." << endl;

	cout << endl;
}