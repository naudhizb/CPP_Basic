// 11_반복자카테고리
#include <list>
#include <forward_list> // 싱글리스트
#include <algorithm>
#include <vector>

// 1. 입력 반복자 : 입력, ++
// 2. 출력 반복자 : 출력, ++
// 아래 부터는 멀티 패스 보장
// 3. 전진형 반복자 : 입력, ++     => 싱글리스트 반복자
// 4. 양방향 반복자 : 입력, ++, -- => 더블리스트
// 5. 임의접근      : 입력, ++, --, +, -, []   => 연속된 메모리


int main()
{
	std::list<int>         ds = { 1,2,3 };
	std::forward_list<int> fs = { 1,2,3 };

	auto p = std::find(ds.begin(), ds.end(), 2);
			// find 알고리즘의 1,2 인자는 반복자 입니다.
			// 최소 요구조건은 5가지 분류중 무엇일까요 ?
			// 입력 반복자
//	std::reverse(x, x+10); // 양방향 반복자
//	std::sort(x, x + 10);  // 퀵 소트입니다. => 임의접근

	//--------------------------
	// 아래 코드를 생각해 보세요
	std::reverse(fs.begin(), fs.end()); // error. 
				// 알고리즘이 요구하는 반복자는 양방향
				// 싱글리스트의 반복자는 전진형..

	std::sort( ds.begin(), ds.end()); 
				// 알고리즘 : 임의접근 요구, 
				// 더블리스트 : 양방향 반복자
	ds.sort(); // 퀵이 아닌 다른 알고리즘.

	std::vector<int> v = { 1,2,3 };
	//v.sort(); // 이 멤버 함수가 있을까요 ? 없다.
				// 알고리즘(일반함수) sort를 사용하면 되니까!

	//std::sort()
}






