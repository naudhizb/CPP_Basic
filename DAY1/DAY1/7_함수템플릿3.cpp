#include <iostream>

// decltype(a+b) : a+b를 했을때 나오는 타입
//				실제로 더하기를 하는 것은 아님.

template<typename T1, typename T2>
//decltype(a+b) Add(T1 a, T2 b)

//auto Add(T1 a, T2 b)->decltype(a + b) // C++11 의 해결책

auto Add(T1 a, T2 b) // C++14. 함수 반환값으로 auto만 사용가능
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