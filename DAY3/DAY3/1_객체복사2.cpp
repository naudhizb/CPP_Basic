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

	// 깊은 복사(Deep Copy) 를 사용한 복사 생성자 
	// 104 page 그림
	People(const People& p) : age(p.age)
	{
		// 1. 포인터가 아닌 멤버는 그냥 복사
		//age = p.age;  // 이 코드 보다 초기화 리스트가 좋다.

		// 2. 포인터 멤버는 주소가 아니라 메모리 자체를 복사
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
	}
};


int main()
{
	People p1("kim", 20);
	People p2 = p1;   

	// 깊은 복사 의 단점(특징..)
	// 아래 코드의 메모리 그림을 생각해 보세요 - 105p 그림
	// => 동일한 자원이 메모리에 여러번 놓이게 됩니다.
	People p3 = p1;
	People p4 = p1;
	People p5 = p1;
}


