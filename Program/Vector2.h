#pragma once
class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int, int);

	const int& X();
	const int& Y();

	const Vector2 operator + (const Vector2& Clone);
	const Vector2 operator - (const Vector2& Clone);
	const Vector2 operator * (const Vector2& Clone);
	const Vector2 operator / (const Vector2& Clone);

	const Vector2& operator++();
	const Vector2& operator--();

	const Vector2& operator++(int);
	const Vector2& operator--(int);
};

