// 2_�������1 - 110 page
#include <iostream>

//int cnt = 0;  // ��������. ��� ��ü�� ���� �Ѵ�.
			  // ��𼭳� ���� �����ϴ�.
class Car
{
	int color;
	static int cnt;  // ��ü�� �Ѱ��� �ƴ϶� ��� ��ü�� �����Ѵ�
public:
	//int cnt = 0;	// ��ü�� �Ѱ��� �����ȴ�.
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

