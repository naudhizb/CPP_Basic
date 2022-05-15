// 11_복사생성자2
// 11_복사생성자  92 page
#include <iostream>
// 복사 생성자가 사용되는 경우 3가지 - 96 page
// 1. 객체 생성시 자신과 동일타입 객체로 초기화 할때

// 2. 함수가 인자를 call by value 로 전달 받을때
//			=> const 레퍼런스를 사용하자.!

// 3. 함수가 값 타입으로 객체를 반환 할때
//			=> 임시객체가 생성되면서 복사 생성자 호출.

class Point
{
	int x, y;
public:
	Point()                : x(0), y(0) {} 
	Point(int a, int b)    : x(a), y(b) {} 
	Point(const Point& pt) : x(pt.x), y(pt.y){	std::cout << "copy constructor" << std::endl;	}
};
//void foo(Point pt) {} // Point pt = p1;
void foo(const Point& pt) {} // const Point& pt = p1;

int main()
{
	Point p1(1, 2); // 2번 생성자
	//Point p2(p1);   // 복사 생성자
	//Point p3 = p1;  // 복사 생성자

	foo(p1);
}

