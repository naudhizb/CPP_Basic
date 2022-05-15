// 9_STL철학   214 page ~
#include <iostream>

// step . 검색 실패시 반환값
// 0이 아닌 last(x+10) 반환
template<typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first;// == last ? nullptr : first;
}



int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };


	double* p = xfind(x, x + 10, 5);

	if (p == x+10)
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << *p << std::endl;
}
