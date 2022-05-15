// 3_����
#include <iostream>

// Swap�� ����� ���ô�.
// 1. C ����
/*
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
*/
// 2. C++ ���۷��� ���
/*
void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
*/

// 3. ���ø� ����
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



