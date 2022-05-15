// 8_대입연산자3
// 어제 소스중 "1_객체복사2.cpp" 복사해 오세요
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

	People(const People& p) : age(p.age)
	{
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
	}

	// 대입연산자
	People& operator=(const People& p)
	{
		// 1. 자신과의 대입을 조사한다.
		if (&p == this)
			return *this;

		// 2. 기반 클래스가 있다면 기반 클래스의 대입연산자를
		//    호출한다.
		Base::operator=(p);

		// data = p.data; // 1. private 일수 있다
						  // 2. 대입정책이 다를수 있다.

		// 3. 포인터가 아닌 멤버는 그냥 대입.
		age = p.age;

		// 4. 기존 버퍼는 지우고 메모리 재할당후 깊은 복사
		delete[] name;
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);

		return *this;
	}
};


int main()
{
	People p1("kim", 20);

	//p1 = p1; // 자신과의 대입
	//People p2 = p1; // 복사 생성자 

	People p2("lee", 10);

	p1.data = 10;
	p2.data = 20;

	p2 = p1; // 

	std::cout << p2.data << std::endl;
}


