// 5_constexpr1.cpp
#include <iostream>

int main()
{
	int arr1[10]; // ok

	int size = 10;
	int arr2[size]; // C89 : �迭�� ũ��� ������ �ð��� �˾ƾ� �Ѵ�.
					// C99 : �迭�� ũ��� ������ ����
					// g++(gcc)����, VC++ ���� ����
	//sub esp, size

	const int size2 = 10; // ������ �ð� ���
	int arr3[size2]; // ok

	const int size3 = size; // runtime ���
	int arr4[size3]; // error

	foo(size);
}

void foo(const int s)
{
	int x[s]; // �ɱ�� ??  vc���� error
}

