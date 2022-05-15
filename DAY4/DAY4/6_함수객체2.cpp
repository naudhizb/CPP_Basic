// 6_함수객체2
#include <iostream>

// 일반함수 : 동작만 있고, 상태가 없다. 
// 0 ~ 9 사이의 유니크한 난수를 반환하는 함수
int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}


