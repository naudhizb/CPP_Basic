// 9_STL철학   214 page ~
#include <iostream>

// step 2. 검색구간의 일반화
// 반개행 구간 표기법 : [first, last)
char* xstrchr(char* first, char* last,  char c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}



int main()
{
	char s[] = "abcdefg";

	char* p = xstrchr(s, s+4, 'e');




	if (p == nullptr)
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << *p << std::endl;
}
