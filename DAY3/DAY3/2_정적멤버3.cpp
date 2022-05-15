// 2_�������1 - 110 page
#include <iostream>


class Car
{
	int color;
	static int cnt;
public:	
	Car() { ++cnt; }
	~Car() { --cnt; }

	// �Ϲ� ��� �Լ� : ��ü�� �־�߸� ȣ���Ҽ� �ִ�.
	//				   c1.getCount();

	// static ��� �Լ� : ��ü�� ��� ȣ�Ⱑ���� �Լ�
	//                  Car::getCount();
	//					c1.getCount();    ��� ����
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

