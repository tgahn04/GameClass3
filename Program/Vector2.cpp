#include "stdafx.h"
#include "Vector2.h"

Vector2::Vector2(int, int)
{
	
}

Vector2 Vector2::operator+(const Vector2& Clone)
{
	Vector2 vector2(x + Clone.x, y + Clone.y);

	return vector2;
}


