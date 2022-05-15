// 2_추상클래스2   171 page
#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};
class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class People
{
public:
	void useCamera(Camera* p) { p->take(); }
	void useCamera(HDCamera* p) { p->take(); }
};
int main()
{
	People p1;
	Camera c1;
	p1.useCamera(&c1);

	HDCamera hc;
	p1.useCamera(&hc);
}


