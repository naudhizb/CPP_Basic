#include <iostream>

class People
{
	char* name;
	int   age;
	int*  ref;   // ������� �޸𸮸� ����ų ������
public:
	People(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);

		ref = new int(1); // �Ѱ��� 1�� �ʱ�ȭ
	}

	// ��������� ����� ���� ������
	People(const People& p)
		: name(p.name), age(p.age), ref(p.ref) // ��� ���������Ŀ�
	{
		++(*ref); // ������� ����
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
// 106 page �׸� ����
int main()
{
	People p1("kim", 20);
	People p2 = p1;      

	// ������� Ư¡
	// ���� : ���� �ڿ��� �޸𸮿� �ѹ��� ���� �ǹǷ� ȿ�����̴�

	// ���� : 1. �ϳ��� ��ü�� �ڿ��� �����Ϸ��� ���纻�� ������ 
	//	         �����ؾ� �Ѵ�. - COW(Copy On Write)
	//        2. ��Ƽ ������ ȯ�濡�� ����ȭ�� ����������.
}
