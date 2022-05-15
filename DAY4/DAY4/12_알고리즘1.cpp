// 12_알고리즘1       227
#include <iostream>
#include <list>
#include <algorithm>

// 조건자(predicator) : bool을 반환하는 함수
bool foo(int a) { return a % 3 == 0; }

int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7 };

	// find 알고리즘은 정말 generic 할까 ?
	// 주어진 구간에서 첫번째 나오는 3의 배수를 찾고 싶다.
	//auto p = std::find(s.begin(), s.end(), 3); // ?

	// 알고리즘의 조건자 버전
	auto p = std::find_if(s.begin(), s.end(), foo);

	std::cout << *p << std::endl;

	
	// C++11 부터 lambda expression 사용가능
	// 함수 이름이 필요한 자리에 함수 구현을 전달.
	auto p2 = std::find_if(s.begin(), s.end(), 
		[](int a) {return a % 3 == 0;	});

}




