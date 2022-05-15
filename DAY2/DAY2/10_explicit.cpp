// 10_explicit
#include <iostream>

class OFile
{
	FILE* file;
public:
	// explicit  생성자 : 직접 초기화시에만 사용가능하고
	//				      복사 초기화에서는 에러.
	explicit OFile(const char* name, const char* mode = "wt")
	{
		file = fopen(name, mode);
	}
	// C++기본 : 생성자에서 자원 획득하면 소멸자에서 자원 반납.
	~OFile() { fclose(file); }
};
// 함수인자를 전달하는 것은 "복사 초기화" 구문 입니다.
void foo(OFile f) // OFile f = "hello"
{
}

int main()
{
	OFile f1("a.txt");   // direct initialization
	OFile f2 = "a.txt";  // copy   initialization

	foo("hello"); // 


	// FILE* f = fopen("a.txt", "wt");
}

