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

// �ٽ� 1. static ��� �Լ��� ����ο��� static �� ǥ���մϴ�.
// 2. static ��� ������ �ܺ� ���Ǵ� .cpp�� �־�� �մϴ�.

