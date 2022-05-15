// 7_스마트포인터1    201 page

#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car()    {	std::cout << "~Car" << std::endl;	}
};
// 개념 : 임의의 객체가 다른 타입의 포인터 역활을 하는 것

// 원리 : -> 연산자를 재정의 해서 포인터 처럼 보이게 하는 것

// 장점 : raw pointer가 아닌 객체 입니다.
//		 생성/복사/대입/소멸의 과정에 추가의 기능을 제공할수 있습니다
//       예) 소멸자에서 delete 기능.

// 아래 코드가 핵심 입니다.
template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	~Ptr() { delete obj; }
	T* operator->() { return obj; }
};
int main()
{
	Ptr<Car> p = new Car;// Ptr p( new Car )

	p->Go();		// (p.operator->()) Go() 의 모양인데
					// (p.operator->())->Go() 로 해석됩니다
}

