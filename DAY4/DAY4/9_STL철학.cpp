// 9_STL철학   214 page ~
#include <iostream>

// step 1. xstrchr()만들기
char* xstrchr(char* s, char c)
{
	while (*s != 0 && *s != c)
		++s;

	return *s == 0 ? nullptr : s;
}

int main()
{
	char s[] = "abcdefg";

	char* p = xstrchr(s, 'a');

	if (p == nullptr)
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << *p << std::endl;
}
