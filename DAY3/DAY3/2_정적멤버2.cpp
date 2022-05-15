// 2_정적멤버1 - 110 page
#include <iostream>

// static 멤버 데이타 특징
// 1. 클래스 안에 선언, 클래스 외부에 정의 를 만들어야 한다.
// 2. 객체가 없어도 메모리에 놓이게 된다.
// 3. 객체 생성시 static 멤버 데이타는 모든 객체가 공유하게 된다.
// 4. 접근 방법
//     Car::cnt
//     c1.cnt
//		java, C# 에서는 클래스 이름으로만 사용가능합니다.
//		Car.cnt  => java, C# 스타일 코드

class Car
{
	int color;
public:
	static int cnt; 
	Car() { ++cnt; }
	~Car() { --cnt; }

	int getCount() { return cnt; }
};
int Car::cnt = 0;

int main()
{
	// 객체가 없어도 static 멤버 데이타에 접근 할수 있다.
	// 단, public 인 경우.
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

	// 객체의 크기에는 static 멤버 데이타는 포함되지 않는다
	std::cout << sizeof(c1) << std::endl; // 4

	// static 멤버 데이타에 접근하는 방법은 2가지 입니다
	std::cout << Car::cnt << std::endl; // 2
	std::cout << c1.cnt << std::endl;   // 2
}

