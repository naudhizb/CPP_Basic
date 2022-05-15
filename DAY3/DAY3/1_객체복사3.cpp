#include <iostream>

class People
{
	char* name;
	int   age;
	int*  ref;   // 참조계수 메모리를 가리킬 포인터
public:
	People(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);

		ref = new int(1); // 한개를 1로 초기화
	}

	// 참조계수를 사용한 복사 생성자
	People(const People& p)
		: name(p.name), age(p.age), ref(p.ref) // 모두 얕은복사후에
	{
		++(*ref); // 참조계수 증가
	}
	   	 
	~People() 
	{
		if (--(*ref) == 0)
		{
			delete[] name;
			delete ref;
		}
	}
};
// 106 page 그림 참고
int main()
{
	People p1("kim", 20);
	People p2 = p1;      

	// 참조계수 특징
	// 장점 : 동일 자원을 메모리에 한번만 놓게 되므로 효율적이다

	// 단점 : 1. 하나의 객체가 자원을 수정하려면 복사본을 만든후 
	//	         수정해야 한다. - COW(Copy On Write)
	//        2. 멀티 스레드 환경에서 동기화가 복잡해진다.
}
