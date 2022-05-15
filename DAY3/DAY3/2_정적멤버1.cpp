// 2_정적멤버1 - 110 page
#include <iostream>

//int cnt = 0;  // 전역변수. 모든 객체가 공유 한다.
			  // 어디서나 접근 가능하다.
class Car
{
	int color;
	static int cnt;  // 객체당 한개가 아니라 모든 객체가 공유한다
public:
	//int cnt = 0;	// 객체당 한개씩 생성된다.
	Car()  { ++cnt; }
	~Car() { --cnt; }
	
	int getCount() { return cnt; }
};
int Car::cnt = 0;

int main()
{
	Car c1;
	Car c2;

	//cnt = 10;

	//std::cout << c1.cnt << std::endl;
	//std::cout << cnt << std::endl; // 2
	std::cout << c1.getCount() << std::endl; // 
}

