// 9_�ʱ�ȭ����Ʈ1    85page ~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b): x(a), y(b) 
	{
	}
};

// Ŭ������ ����� "����Ʈ ������(���ھ��� ������)"�� ���� Ÿ����
// �ִٸ�
// C++98 ��Ÿ�� : �ݵ�� �ʱ�ȭ ����Ʈ���� �ʱ�ȭ �ؾ� �Ѵ�.
// C++11 : ��� ���� ����� {} ��밡��. Point ptFrom{0,0}
//		   

class Rect
{
	int data = 0;
	Point ptFrom;
	Point ptTo;
public:
	Rect() : ptFrom(0,0), ptTo(0,0)
	{
		//ptFrom(0, 0); // ? ptFrom �̶�� �Լ��� ȣ���ϴ� �ڵ�		
						// error
	}
};
int main()
{
	Rect r; // �� ������ ������. �Լ��� �� ��� ȣ��?
}




