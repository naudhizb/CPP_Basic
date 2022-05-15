// 4_상수멤버함수1.cpp    119 page ~
#include <iostream>
class Point
{
public:
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print() const   // 상수 멤버 함수
	{	
		// 상수 멤버 함수 안에서는 모든 멤버를 상수 취급 합니다
		// x = 100; // error

		std::cout << x << ", " << y << std::endl;
	}
};
int main() 
{
	// 왜 상수 멤버 함수가 "꼭" 필요한가 ?

	const Point p(1, 2);
	p.x = 10;		// error. p는 상수이므로
	p.set(10, 20);	// error.
	p.print();		// error. 호출되게 하려면 
					// print() 가 상수 멤버 함수가 되야 합니다.

	// 핵심 : "상수 객체" 는 "상수 멤버 함수"만 호출할수 있습니다.
	// 121 page 아래 부분
}

