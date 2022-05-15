// 9_STL철학   214 page ~
#include <iostream>

// step 4. 보다 일반화 되게

// 아래 처럼 만들면 2개의 문제점이 있습니다.
// 1. 구간의 타입과 검색 요소 타입이 연관됩니다.
//    double 배열에서 int 검색 안됨

// 2. T* 라고 하면 raw pointer 만 됩니다. 스마트포인터 안됩니다.
//template<typename T>T* xfind(T* first, T* last, T c)

template<typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}



int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 5 );




	if (p == nullptr)
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << *p << std::endl;
}
