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
	cout << "말랑말랑한 점액 생물. 공격력은 약하지만 숫자가 많아 몰려오면 위험하다." << endl;
	cout << endl;
}