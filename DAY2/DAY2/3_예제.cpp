// 3_예제
#include <iostream>

// Swap를 만들어 봅시다.
// 1. C 버전
/*
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
*/
// 2. C++ 레퍼런스 사용
/*
void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
*/

// 3. 템플릿 도입
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	double x = 3.4, y = 2.1;
	//Swap(&x, &y);
	Swap(x, y);

	std::cout << x << std::endl;
	std::cout << y << std::endl;
}



