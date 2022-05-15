#include <iostream>

class Animal 
{
public:
	//virtual ~Animal() {}
};
class Dog : public Animal {};

void foo(Animal* p)
{
	// Animal* => Dog*
	//Dog* pDog = static_cast<Dog*>(p); // 무조건 성공

	// Run Time Type Information
	// 가상함수가 있는 경우만 가능.
	Dog* pDog = dynamic_cast<Dog*>(p); // p가 정말 dog이어야 성공
	
	std::cout << pDog << std::endl;
}
void foo(Dog* p)
{
	//...
	foo(static_cast<Animal*>(p))
}
void main()
{
	Animal a;
	//Dog a;
	foo(&a);
}

int foo()
{
	return -1; // 반환값을 통한 실패 전달.
}
// 반환값과 실패의 분리
class memory_exception {};
int goo()
{
	if (실패)
		throw memory_exception();
}
int main()
{
	try
	{
		goo();
		//....
	}
	catch(memory_exception n)
	{ }

	int n = foo();
}

void foo()
{
	if (실패 1) throw netrworkexception();
	if (실패 2) throw memoryexception();
}
int main()
{
	try
	{
		foo();
	}
	catch (netrworkexception e) {}
	catch (memoryexception e) {}
}