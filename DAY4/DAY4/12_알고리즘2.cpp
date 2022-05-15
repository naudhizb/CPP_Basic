#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

/*
map<string, string> m;
m["월요일"] = "mon"

bimap<string, string> bm;
bm.left[월요일] = "mon";

bm.right["mon"]
*/


//핵심 : 알고리즘은 컨테이너를 모른다.!

// 결론. 알고리즘 함수와 동일한 이름의 멤버 함수가 있다면
//      멤버함수를 사용하자!!!!

int main()
{
	// list는 아래 vector처럼 remove 일반 함수 사용하지 말고
	// 멤버 함수를 사용하자.
	std::list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	v.remove(3); // 아래 코드보다 빠르다.


	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// remove : 요소를 당겨 놓게 된다
	auto p = std::remove(v.begin(), v.end(), 3);

	for (auto n : v)
		std::cout << n << " ";

	std::cout << std::endl;

	v.erase(p, v.end());

	for (auto n : v)
		std::cout << n << " ";
}

