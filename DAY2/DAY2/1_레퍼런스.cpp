// 1_레퍼런스.cpp    41 page

#include <iostream>
// 핵심 1. 기존 변수(메모리)에 새로운 이름을 부여 하는 것
//     2. 레퍼런스 변수 선언시 반드시 초기값이 있어야 합니다.
int main()
{
	int n1 = 10;
	int n2 = n1;
	int* p1 = &n1;

	int& r1 = n1; // C++ 에서 추가한 새로운 타입

	r1 = 30;

	std::cout << n1  << std::endl; // 30
	// 결국 r1의 주소와 n1의 주소는 동일 합니다.
	std::cout << &r1 << std::endl;
	std::cout << &n1 << std::endl;

	// 포인터와 레퍼런스는 모두 기존 메모리를 가리킬수 있습니다.
	// null 포인터는 존재 할수 있지만 null 레퍼런스는 존재 할수
	// 없습니다
	int& r2; // error
	int* p2 = nullptr; // ok

	
}



