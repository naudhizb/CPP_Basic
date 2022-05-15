// 11_복사생성자2
// 11_복사생성자  92 page
#include <iostream>
// 복사 생성자가 사용되는 경우 3가지 - 96 page
// 1. 객체 생성시 자신과 동일타입 객체로 초기화 할때

// 2. 함수가 인자를 call by value 로 전달 받을때
//			=> const 레퍼런스를 사용하자.!

class Point
{
	int x, y;
public:
	Point() : x(0), y(0)             { std::cout << "생성자1" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "생성자2" << std::endl; }
	Point(const Point& pt) : x(pt.x), y(pt.y) { std::cout << "copy constructor" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
Point foo()  // return by value
{
	Point pt(1,2);
	return pt; // 이순간 리턴용 임시객체가 생성됩니다.
				// 리턴용 임시객체를 pt를 복사해서 생성
}
int main()
{
	Point ret;
	std::cout << "----" << std::endl;
	ret = foo();
	std::cout << "----" << std::endl;
}
// 생성자1
// -----
// 생성자2
// 복사 생성자 - 리턴용 임시객체를 만들기 위해
// 소멸자 - pt 파괴
// 소멸자 - 리턴용 임시객체 파괴
//------
// 소멸자 - ret 파괴.
