#pragma once
class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int, int);
	Vector2 operator + (const Vector2 & Clone);
};

