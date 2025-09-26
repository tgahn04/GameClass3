#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Created_Character" << endl;
}

void Character::Partner(const weak_ptr<Character> reference)
{
	character = reference;
}

Character::~Character()
{
	cout << "Destroy_Character" << endl;
}
