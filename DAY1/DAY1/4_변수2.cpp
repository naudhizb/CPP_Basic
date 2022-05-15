// 4_����1
#include <iostream>

struct Point
{
	int x, y;
};
int main()
{
	// 20page - �߿��� ��ȭ.!
	//int n = 10;
	//int x[3] = { 1,2,3 };
	//Point p1 = { 1,2 };

	// �ϰ��� �ʱ�ȭ(uniform initialization) ���� - C++11
	// ��� ������ ������ �ʱ�ȭ �Ҷ� {} ���
	// int n = { 10 };
	// int x[3] = { 1,2,3 };
	// Point p1 = { 1,2 };

	int n { 10 };
	int x[3] { 1,2,3 };
	Point p1 { 1,2 };

	// ���� �ʱ�ȭ(direct initialization) : =�� ���°�
	// ���� �ʱ�ȭ(copy   initialization) : =�� �ִ°�

	// {} �� �ʱ�ȭ(���� �Ǵ� ����)�� ����Ÿ �ս� �߻��ϸ� error.
	int n2 = 3.4;   // ok.. ������ ���� �ڵ�,
	int n3 = { 3.4 }; // error. preventing narrow ��� ����
	
	char c = { 300 }; // error
}



