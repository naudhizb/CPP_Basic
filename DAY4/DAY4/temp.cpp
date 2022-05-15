// 1_��ü����.cpp   102 page ~
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

	// ���� ����(Deep Copy) �� ����� ���� ������ 
	// 104 page �׸�
	People(const People& p) : age(p.age)
	{
		// 1. �����Ͱ� �ƴ� ����� �׳� ����
		//age = p.age;  // �� �ڵ� ���� �ʱ�ȭ ����Ʈ�� ����.

		// 2. ������ ����� �ּҰ� �ƴ϶� �޸� ��ü�� ����
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


