// 6_�Լ���ü     199 page
#include <iostream>
// �Լ� ��ü(function object, functor)
// () �����ڸ� ������ �ؼ� �Լ� ó�� ��밡���� ��ü
class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	Plus p;
	int n = p(1, 2); // p.operator()(1,2) �� ����

	std::cout << n << std::endl;

	// a + b; // a.operator+ (b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2)
}

