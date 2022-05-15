// 1_객체복사.cpp   102 page ~
#include <iostream>
class People
{
	char* name;
	int   age;
public:
	People(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	~People() { delete[] name; }

	// 복사 정책 3. 복사 금지
	// 복사를 금지할때는 대입연산자도 같이 삭제 하는 것이 원칙
	People(const People& p) = delete;
	void operator=(const People& p) = delete;
};
void foo(People p) {}
int main()
{
	People p1("kim", 20);
	People p2 = p1;      // error

	People p3("lee", 30);

	p3 = p1; // 대입 연산자 호출. 삭제했으므로 error

	//foo(p1);
}


