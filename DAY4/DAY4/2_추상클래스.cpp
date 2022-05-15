// 2_추상클래스    168 page
#include <iostream>
// 추상 클래스 : 순수 가상함수가 한개 이상 있는 클래스
// 특징 : 객체를 만들수 없다.
// 의도 : 특정 함수의 구현부를 제공하라고 지시 하는 문법.
class Shape
{
public:
	virtual void Draw() = 0; // 순수 가상함수(구현부가 없다.)
							 // pure virtual function
};
class Rect : public Shape   // Draw()의 구현부를 제공하지 않으면
{							// 역시 추상 클래스이다.
};
int main()
{
	//Shape s; // error
	Rect  r;
}
