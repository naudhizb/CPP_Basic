#include <iostream>

// Car.h
class Car
{
	int color;
	static int cnt;
public:
	Car();
	~Car();
	static int getCount();
};
// Car.cpp
int Car::cnt;

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }
int Car::getCount() { return cnt; }

// 핵심 1. static 멤버 함수는 선언부에만 static 을 표기합니다.
// 2. static 멤버 변수의 외부 정의는 .cpp에 있어야 합니다.

