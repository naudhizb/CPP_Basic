// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
int main()
{
	Dog     dog;
	Dog*    p1 = &dog; // ok
	Animal* p2 = &dog; // ok. 파생클래스의 주소를
					// 기반 클래스 타입의 포인터에 담을수있다

	//p2->color = 10; // error. Animal* 로는 Animal의 멤버만
					// 접근 가능하다.

	static_cast<Dog*>(p2)->color = 10;
}

// 핵심 1. 기반 클래스포인터에 파생클래스 주소 담을수 있다.
//      2. 하지만 파생클래스 고유에 멤버에는 접근 안됨.
//      3. 접근하려면 다시 파생클래스 타입으로 캐스팅해야 한다
