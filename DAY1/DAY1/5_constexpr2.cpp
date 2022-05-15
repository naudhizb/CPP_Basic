#include <iostream>

int main()
{
	//const int c = 10; // 컴파일 시간 상수

	int n = 10;
	const int c = n; // runtime 상수
					// 컴파일시 값은 알수 없다.
					// 하지만, 값을 변경하려면 error
	//c = 20;
//	int *p = &c; // error

	int *p = (int*)&c; // ok.
	*p = 20;

	std::cout << c  << std::endl; // 10   20
	std::cout << *p << std::endl; // 20   20
}