#include <iostream>

int main()
{
	//const int c = 10; // ������ �ð� ���

	int n = 10;
	const int c = n; // runtime ���
					// �����Ͻ� ���� �˼� ����.
					// ������, ���� �����Ϸ��� error
	//c = 20;
//	int *p = &c; // error

	int *p = (int*)&c; // ok.
	*p = 20;

	std::cout << c  << std::endl; // 10   20
	std::cout << *p << std::endl; // 20   20
}