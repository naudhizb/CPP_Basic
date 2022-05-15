// www.cppreference.com
#include <iostream>
#include <list>   // 더블리스트
#include <vector> // 동적배열(연속된메모리)
#include <string>
#include <algorithm> // find 같은 일반 함수들(알고리즘이라고부르는)

int main()
{
	//std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	//std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::string s = "helloworld";

	// 뒤집는 알고리즘은 reverse 입니다. 뒤집에 보세요
	std::reverse(s.begin(), s.end());

	for (auto n : s)
		std::cout << n << std::endl;
}


