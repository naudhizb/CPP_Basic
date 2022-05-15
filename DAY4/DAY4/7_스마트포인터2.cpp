// 7_����Ʈ������2
#include <iostream>
#include <memory>   // C++ ǥ�� ����Ʈ ������

class Car
{
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};
int main()
{
//	std::shared_ptr<Car> p1 = new Car; // error
	std::shared_ptr<Car> p2(new Car);  // ok.. explicit ������

	// p2�� Car* ��� �����ϸ� �˴ϴ�.
	p2->Go();
	(*p2).Go(); // p2.operator*()�� ������ �Ǿ� �ֽ��ϴ�.
}
// 1990��� ��: ����Ʈ�����Ͱ��� ����
// boost ���̺귯������ shared_ptr�� �����ϱ� ����
// C++11 ���� C++���� ǥ������ ä�õ�.



