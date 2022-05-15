// 11_복사생성자2
#include <iostream>

class Point
{
public:
	int x, y;

	Point() : x(0), y(0) { std::cout << "생성자1" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "생성자2" << std::endl; }
	Point(const Point& pt) : x(pt.x), y(pt.y) { std::cout << "copy constructor" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt(1, 1); // 전역 객체
Point foo()     // 값 반환 : 임시객체가 반환된다.
{
	return pt; 
}
Point& goo()     // 참조 반환 : 임시객체를 만들지 말라는것
{					// 99page 마지막 소스
	return pt;
}

int main()
{
	foo().x = 10; // error. temporary 는 왼쪽에 올수없다
	goo().x = 10; // ok

	cout << "A" << "B" << "C";
}

// 정리
n = x;
x = 10;
// 1. primitive
int  foo() { return x; } // x의 값. 
int& goo() { return x; } // x 자체 (메모리)

// 2. user type
Point  foo() { return pt; } // 임시객체
Point& goo() { return pt; } // pt의 자체(메모리)




