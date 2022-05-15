#include <iostream>

/*
int Add(int a, int b)
{
	return a + b;
}
*/
/*
template<typename T> 
T Add(T a, T b)
{
	return a + b;
}
*/
/*
template<typename T1, typename T2>
T1 Add(T1 a, T2 b)
{
	return a + b;
}
*/
// 반환타입 해결책1. 템플릿 인자로 타입을 전달 받는다.
template<typename R, typename T1, typename T2>
R Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	//std::cout << Add<int, double>(1, 2.5 ) << std::endl;

	std::cout << Add<double>(1, 2.5) << std::endl;
}

