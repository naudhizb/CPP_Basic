// 3_this1.cpp      126 page ~
#include <iostream>

class Point
{
	int x, y;
public:
	void set(int x, int y) 
	{
		// this Ȱ�� 1. �̸��� �浹���� ����� �����ϰ� ������
		this->x = x;	
		this->y = y;
	}
	// Ȱ�� 2. this�� ��ȯ�ϴ� �Լ�
	//        �Լ��� ���������� ȣ�Ⱑ��
	Point* foo() { return this; }
	//Point  goo() { return *this; } // *this�� �ƴ϶� 
									// ���纻(�ӽð�ü) ��ȯ
	Point&  goo() { return *this; } // ok.
			// �ڽ��� ������ ��ȯ�Ҷ��� �ݵ�� ������ȯ �ؾ��մϴ�.

};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20);

	p1.foo()->foo()->foo();

	p1.goo().goo().goo(); // cout << "A" << "B" << "C" �� ����
}
