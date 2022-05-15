// 11_복사생성자  92 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// 복사 생성자 : 자신과 동일 타입 객체를 인자로 받는 생성자
	// 사용자가 만들지 않으면 컴파일러가 제공해 준다
	Point(const Point& pt)
		: x(pt.x), y(pt.y)
	{
		std::cout << "copy constructor" << std::endl;
	}
};

int main()
{
	Point p1;		// 1번 생성자
	Point p2(1, 1);	// 2번 생성자

	//Point p3(1);	// Point(int) 모양의 생성자 필요.
					// 없으므로 error

	Point p4(p2);	// Point(Point) 모양의 생성자가 필요
					// 없지만 ok.

	Point p5 = p2;  // 복사 생성자. 직접이 아닌 복사 초기화
}

