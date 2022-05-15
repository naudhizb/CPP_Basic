#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main()
{
	//std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };
	std::list<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 정렬하는 알고리즘은 std::sort  입니다. v를 정렬해 보세요
	std::sort( v.begin(), v.end() );

	for (auto n : v)
		std::cout << n << std::endl;
}
// 결과 확인해 보신분은 v를 list로 변경해 보세요.



