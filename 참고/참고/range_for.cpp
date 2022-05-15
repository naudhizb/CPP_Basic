#include <iostream>
#include <vector>

int main()
{
	// begin 은 멤버와 일반 함수의 2가지 버전이 있습니다.
	//std::vector<int> v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };

	auto p1 = v.begin();  // 배열일때는 안됩니다.


	auto p2 = begin(v);   // 배열도 가능합니다. - C++11부터

	for (auto n : v)
	{
		std::cout << n << std::endl;
	}


	// 위 for 문의 원리
	for (auto it = begin(v) : it != end(v) ; ++it)
	{
		auto n = *it;
		//------------------
		std::cout << n << std::endl;
	}
}


