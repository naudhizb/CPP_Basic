// 12_��ü���� - 102 page.. C++�⺻�� �ٽ� ����!!
#include <iostream>

// Ŭ���� �ȿ� ������ ����� ������
// �����Ϸ��� ����� ���� �����ڴ� "��������(shallow copy)"
// ������ ����ŵ�ϴ�.

// �ݵ�� ����ڰ� ���� �����ڸ� �ٽ� ������ �մϴ�.
// ��� ��������ڸ� ������ΰ� ?
// ��������/�������/����������/�������


class Cat
{
	char* name;
	int   age;	
public:
	Cat(const char* n, int a ) : age(a) 
	{
		name = new char[strlen(n) + 1]; // null���� ���
		strcpy(name, n);
	}
	~Cat() { delete[] name; }
};
int main()
{
	Cat c1("nabi", 3);
	Cat c2 = c1;      // runtime error.
						// 103 page ���� �׸�.
}

