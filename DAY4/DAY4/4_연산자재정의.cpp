// 4_연산자재정의     182 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	// friend 선언 : 멤버 함수는 아니지만 private멤버에
	//				접근하게 하고 싶을때 사용
	//				주로 연산자 재정의에서 많이 사용.
	//friend void foo();
	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	Point p3(p1.x + p2.x, p1.y + p2.y);
	return p3;
}

int main()
{
	Point p1(1, 1), p2(2, 2);

	int n = 3 + 4;

	// "사용자 정의 타입도 primitive 타입처럼 사용할수 있어야한다"
	Point p3 = p1 + p2; // operator+(Point, Point) 를 찾게된다

	// operator+는 결국 함수 입니다. 아래 처럼 사용해도 됩니다.
	Point p4 = operator+(p1, p2);

	// 연산자 재정의 함수를 사용하는 방법
	// 1. 일반 함수처럼 이름으로 : operator+(p1, p2)
	// 2. 연산자 기호로         : p1 + p2
}



