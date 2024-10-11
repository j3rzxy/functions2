#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
// Функция определяющая знак числа
float findsign(int x)
{
	if (x < 0)
	{
		return -1;
	}
	else if (x > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
// Функция среднего значения
float srznach(float y1, float y2)
{
	float sz = (y1 + y2) / 2;
	return sz;
}
// Функция опрделяющая четность числа
float chetnechet(float x)
{
	if (x % 2 == 0)
	{
		return 1;
	}
	else if (x % 2 != 0)
	{
		return 0;
	}
}
float _sum(float x, float y){
	return x + y;
}
float _vichitanie(float x, float y){
	return x - y;
}
float _umn(float x, float y){
	return x * y;
}
float _del(float x, float y){
	return x / y;
}
float _Max(float x, float y){
	if (x > y){
		return x;
	}
	else if (x < y){
		return y;
	}
	else if (x == y){
		return 0;
	}
}
float _Min(float x, float y){
	if (x < y){
		return x;
	}
	else if (x > y){
		return y;
	}
	else if (x == y){
		return 0;
	}
}
int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	int x = -312;
	int a1 = 13;
	int a2 = 12;
	findsign(x);
	srznach(a1, a2);
	chetnechet(a1);
}
