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
	//Dog* pDog = static_cast<Dog*>(p); // ������ ����

	// Run Time Type Information
	// �����Լ��� �ִ� ��츸 ����.
	Dog* pDog = dynamic_cast<Dog*>(p); // p�� ���� dog�̾�� ����
	
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
	return -1; // ��ȯ���� ���� ���� ����.
}
// ��ȯ���� ������ �и�
class memory_exception {};
int goo()
{
	if (����)
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
	if (���� 1) throw netrworkexception();
	if (���� 2) throw memoryexception();
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