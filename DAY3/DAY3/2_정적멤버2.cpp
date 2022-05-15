// 2_�������1 - 110 page
#include <iostream>

// static ��� ����Ÿ Ư¡
// 1. Ŭ���� �ȿ� ����, Ŭ���� �ܺο� ���� �� ������ �Ѵ�.
// 2. ��ü�� ��� �޸𸮿� ���̰� �ȴ�.
// 3. ��ü ������ static ��� ����Ÿ�� ��� ��ü�� �����ϰ� �ȴ�.
// 4. ���� ���
//     Car::cnt
//     c1.cnt
//		java, C# ������ Ŭ���� �̸����θ� ��밡���մϴ�.
//		Car.cnt  => java, C# ��Ÿ�� �ڵ�

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
	// ��ü�� ��� static ��� ����Ÿ�� ���� �Ҽ� �ִ�.
	// ��, public �� ���.
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

	// ��ü�� ũ�⿡�� static ��� ����Ÿ�� ���Ե��� �ʴ´�
	std::cout << sizeof(c1) << std::endl; // 4

	// static ��� ����Ÿ�� �����ϴ� ����� 2���� �Դϴ�
	std::cout << Car::cnt << std::endl; // 2
	std::cout << c1.cnt << std::endl;   // 2
}

