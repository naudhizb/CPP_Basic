// 3_this1.cpp      126 page ~
#include <iostream>

class Point
{
	int x, y;
public:
	void set(int x, int y) 
	{
		// this 활용 1. 이름이 충돌날때 멤버에 접근하고 싶을때
		this->x = x;	
		this->y = y;
	}
	// 활용 2. this를 반환하는 함수
	//        함수를 연속적으로 호출가능
	Point* foo() { return this; }
	//Point  goo() { return *this; } // *this가 아니라 
									// 복사본(임시객체) 반환
	Point&  goo() { return *this; } // ok.
			// 자신을 값으로 반환할때는 반드시 참조반환 해야합니다.

};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20);

	p1.foo()->foo()->foo();

	p1.goo().goo().goo(); // cout << "A" << "B" << "C" 의 원리
}
