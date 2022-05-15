// 8_반복문 38 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	// C++11 에서 등장한 새로운 반복문
	for (auto n : x)    // range - for
						// java, C#의 foreach() 문
		std::cout << n << std::endl;


	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;



}