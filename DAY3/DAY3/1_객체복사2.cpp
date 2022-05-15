// 1_��ü����.cpp   102 page ~
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
};


int main()
{
	People p1("kim", 20);
	People p2 = p1;   

	// ���� ���� �� ����(Ư¡..)
	// �Ʒ� �ڵ��� �޸� �׸��� ������ ������ - 105p �׸�
	// => ������ �ڿ��� �޸𸮿� ������ ���̰� �˴ϴ�.
	People p3 = p1;
	People p4 = p1;
	People p5 = p1;
}


