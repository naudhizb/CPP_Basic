#include <iostream>


// 카메라를 만들기 전에, 사람과 카메라 사이의 규칙을 설계하자.
// 규칙 : 모든 카메라는 아래 클래스로 부터 파생 되어야 한다. 라고 하지 말고

// 규칙 : "모든 카메라는 아래 인터페이스를 구현해야 한다." 라고 표현

#define interface struct

interface ICamera
{
	virtual void take()  = 0;
	virtual ~ICamera() {}
};


// 카메라는 없지만 규칙이 생겼다. 규칙대로 사용하면 된다.
class People
{
public:
	void useCamera(ICamera* p) { p->take(); }
	//void useCamera(ICamera& p) { p.take(); }
};

// 모든 카메라는 규칙대로 만들어야 한다.
class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};
class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};
int main()
{
	People p1;
	Camera c1;
	p1.useCamera(&c1);

	HDCamera hc;
	p1.useCamera(&hc);
}


