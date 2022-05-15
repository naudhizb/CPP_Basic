// 8_생성자1
#include <iostream>

class Point
{
	int x, y;
public:
	// 특징 1. 클래스이름과 동일
	//     2. 반환타입을 표기하지 않는다.
	//     3. 오버로딩 가능(2개 이상 만들수있다.)
	//     4. 객체를 생성하면 생성자가 호출된다.
	//     5. 사용자가 한개도 만들지 않으면 컴파일러가 
	//	      인자 없는 생성자를 한개 만들어준다 - 디폴트 생성자
	//Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

int main()
{
	Point pt1;			// 1
	//Point pt2(0, 0);	// 2
}

