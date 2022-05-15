// 2_정적멤버1 - 110 page
#include <iostream>


class Car
{
	int color;
	static int cnt;
public:	
	Car() { ++cnt; }
	~Car() { --cnt; }

	// 일반 멤버 함수 : 객체가 있어야만 호출할수 있다.
	//				   c1.getCount();

	// static 멤버 함수 : 객체가 없어도 호출가능한 함수
	//                  Car::getCount();
	//					c1.getCount();    모두 가능
	static int getCount() { return cnt; }
};
int Car::cnt = 0;

int main()
{
	std::cout << Car::getCount() << std::endl;
	Car c1;
	Car c2;
	std::cout << c1.getCount() << std::endl;
}

