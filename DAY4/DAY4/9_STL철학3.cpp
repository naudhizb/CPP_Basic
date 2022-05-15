// 9_STL철학   214 page ~
#include <iostream>

// step 3. 검색 대상 타입의 일반화

template<typename T>
T* xfind(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}



int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 5.0);




	if (p == nullptr)
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << *p << std::endl;
}
