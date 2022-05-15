// 8_���Կ�����3
// ���� �ҽ��� "1_��ü����2.cpp" ������ ������
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

	// ���Կ�����
	People& operator=(const People& p)
	{
		// 1. �ڽŰ��� ������ �����Ѵ�.
		if (&p == this)
			return *this;

		// 2. ��� Ŭ������ �ִٸ� ��� Ŭ������ ���Կ����ڸ�
		//    ȣ���Ѵ�.
		Base::operator=(p);

		// data = p.data; // 1. private �ϼ� �ִ�
						  // 2. ������å�� �ٸ��� �ִ�.

		// 3. �����Ͱ� �ƴ� ����� �׳� ����.
		age = p.age;

		// 4. ���� ���۴� ����� �޸� ���Ҵ��� ���� ����
		delete[] name;
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);

		return *this;
	}
};


int main()
{
	People p1("kim", 20);

	//p1 = p1; // �ڽŰ��� ����
	//People p2 = p1; // ���� ������ 

	People p2("lee", 10);

	p1.data = 10;
	p2.data = 20;

	p2 = p1; // 

	std::cout << p2.data << std::endl;
}


