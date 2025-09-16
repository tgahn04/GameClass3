#include "Slime.h"
#include <iostream>

using namespace std;

Slime::Slime()
{
	health = 50;
	attack = 1;
	defense = 1;

	cout << "Created_Slime" << endl;
}

Slime::~Slime()
{
	cout << "Destroy_Slime" << endl;
}