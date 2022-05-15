// 5_constexpr1.cpp
#include <iostream>

int main()
{
	int arr1[10]; // ok

	int size = 10;
	int arr2[size]; // C89 : 배열의 크기는 컴파일 시간에 알아야 한다.
					// C99 : 배열의 크기로 변수도 가능
					// g++(gcc)지원, VC++ 지원 안함
	//sub esp, size

	const int size2 = 10; // 컴파일 시간 상수
	int arr3[size2]; // ok

	const int size3 = size; // runtime 상수
	int arr4[size3]; // error

	foo(size);
}

void foo(const int s)
{
	int x[s]; // 될까요 ??  vc에서 error
}

