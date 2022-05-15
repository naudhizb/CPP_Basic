#include <iostream>


// ī�޶� ����� ����, ����� ī�޶� ������ ��Ģ�� ��������.
// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�. ��� ���� ����

// ��Ģ : "��� ī�޶�� �Ʒ� �������̽��� �����ؾ� �Ѵ�." ��� ǥ��

#define interface struct

interface ICamera
{
	virtual void take()  = 0;
	virtual ~ICamera() {}
};


// ī�޶�� ������ ��Ģ�� �����. ��Ģ��� ����ϸ� �ȴ�.
class People
{
public:
	void useCamera(ICamera* p) { p->take(); }
	//void useCamera(ICamera& p) { p.take(); }
};

// ��� ī�޶�� ��Ģ��� ������ �Ѵ�.
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


