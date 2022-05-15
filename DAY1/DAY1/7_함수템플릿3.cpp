#include <iostream>

// decltype(a+b) : a+b�� ������ ������ Ÿ��
//				������ ���ϱ⸦ �ϴ� ���� �ƴ�.

template<typename T1, typename T2>
//decltype(a+b) Add(T1 a, T2 b)

//auto Add(T1 a, T2 b)->decltype(a + b) // C++11 �� �ذ�å

auto Add(T1 a, T2 b) // C++14. �Լ� ��ȯ������ auto�� ��밡��
{
	return a + b ;
}


int main()
{
	std::cout << Add(1, 3.4) << std::endl;

//	a = 10; // error
//	int a;
//	a = 10; //ok
}