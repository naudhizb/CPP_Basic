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

	// ���� ��å 3. ���� ����
	// ���縦 �����Ҷ��� ���Կ����ڵ� ���� ���� �ϴ� ���� ��Ģ
	People(const People& p) = delete;
	void operator=(const People& p) = delete;
};
void foo(People p) {}
int main()
{
	People p1("kim", 20);
	People p2 = p1;      // error

	People p3("lee", 30);

	p3 = p1; // ���� ������ ȣ��. ���������Ƿ� error

	//foo(p1);
}


