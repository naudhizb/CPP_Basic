// 7_가상함수1  144 page ~

#include <iostream>

class Animal
{
public:
	virtual void Cry() { std::cout << "Animal Cry" << std::endl; }
};
class Dog : public Animal
{
public:
	// 함수 override : 기반 클래스의 함수를 파생 클래스가
	//				  재정의 하는 것
	virtual void Cry() { std::cout << "Dog Cry" << std::endl; }
};
int main()
{
	Animal a; a.Cry(); // 1
	Dog    d; d.Cry(); // 2

	Animal* p = &d;

	//int n; 
	//cin >> n;
	//if (n == 0) p = &a;

	p->Cry();  // 1 ? 2
}

// 함수 바인딩 : p->Cry() 를 어떤 함수로 연결할것인가 ?

// 1. static binding : 컴파일 시간에 컴파일러가 결정.
//			컴파일러는 컴파일 시간에 포인터 타입밖에 알수없다.
//			포인터 타입으로 호출.  Animal::Cry()
// ealry binding. 빠르다. 논리적이지 않다.
//			C++, C#

// 2. dynamic binding : 컴파일 시간에 p가 가리키는 메모리를
//			조사하는 기계어 코드 생성
//			실행시 메모리 조사후 호출.  메모리에있는객체::Cry()
// late binding. 느리다. 논리적이다.
//          java. swift, objective-c, kotlin
//			C++/C#의 virtual 함수




