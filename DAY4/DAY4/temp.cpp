// 1_객체복사.cpp   102 page ~
#include <iostream>

class Base
{
public:
	int data;
};
class People : public Base
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

	People& operator=(const People& p)
	{
		Base::operator=(p);
		delete[] name;
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);

		age = p.age;
		return *this;
	}
};


int main()
{
	People p1("kim", 20);
	People p2("Lee", 30);

	p1.data = 10;
	p2.data = 20;
	p1 = p2;

	std::cout << p1.data << std::endl;
}


