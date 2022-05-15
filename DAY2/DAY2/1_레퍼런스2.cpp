// 1_레퍼런스2
#include <iostream>
// 43 page

// 포인터와 레퍼런스의 용도는 유사합니다.
// 1. "자동 dereference 되는 포인터" 가 레퍼런스 입니다
// 2. 포인터는 if ( p != nullptr ) 이 필요 하지만
//    레퍼런스는 필요 없습니다. - 포인터 보다 안전.

// C++ 에서는 포인터 보다 레퍼런스를 더 많이 사용합니다.

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1(a);		// call by value. 원본 수정 안됨
	inc2(&b);		// call by pointer. 원본 수정 가능
	inc3(c);		// call by reference. 원본 수정 가능

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	// 사용자 입력을 받아 올때
	scanf("%d", &a);  // 2번째 인자가 포인터 입니다.
	cin >> a;		  // >> 함수의 인자가 참조 입니다.
}