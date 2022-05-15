// 12_객체복사 - 102 page.. C++기본의 핵심 주제!!
#include <iostream>

// 클래스 안에 포인터 멤버가 있으면
// 컴파일러가 만드는 복사 생성자는 "얕은복사(shallow copy)"
// 현상을 일으킵니다.

// 반드시 사용자가 복사 생성자를 다시 만들어야 합니다.
// 어떻게 복사생성자를 만들것인가 ?
// 깊은복사/참조계수/소유권이전/복사금지


class Cat
{
	char* name;
	int   age;	
public:
	Cat(const char* n, int a ) : age(a) 
	{
		name = new char[strlen(n) + 1]; // null문자 고려
		strcpy(name, n);
	}
	~Cat() { delete[] name; }
};
int main()
{
	Cat c1("nabi", 3);
	Cat c2 = c1;      // runtime error.
						// 103 page 위쪽 그림.
}

