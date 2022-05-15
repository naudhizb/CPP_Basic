// 8_생성자1
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

int main()
{
	Point pt1;			// 1
	Point pt2(0, 0);	// 2
	Point pt3{ 0, 0 };	// 2번 생성자. C++11의 일관된초기화.
						// 직접 초기화
	Point pt4 = { 0, 0 }; // 2번, 복사 초기화
	Point arr[5]; // 1번 생성자 5번.

	Point arr2[5] = { Point(0,0), {1,1} }; // 2번 2회호출
											// 1번 3회 호출
					// C++98/03    C++11 스타일

	Point* p; // 객체 아님. 생성자 호출 안됨.

	p = (Point*)malloc(sizeof(Point));  // 생성자 호출안됨.
	free(p);

	p = new Point;  // 메모리 할당 + 1번 생성자 호출 => 객체 생성
	delete p;

	p = new Point(1, 1); // 2번 생성자,  new Point{1,1}
	delete p;
}


