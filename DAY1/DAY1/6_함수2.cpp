#include <cstdio>
// 6_�Լ�2 
// C++ �Լ��� Ư¡ 2. �Լ� �����ε�
// ������ ������ �ٸ��ų� ������ Ÿ���� �ٸ��� ������ �̸���
// �Լ��� 2���̻� ����� �ִ�.
//#define SQUARE(x) ((x)*(x))
//SQUARE(++n);
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	square(3);
	square(3.4);

	printf("%p\n", &square); // error
	printf("%p\n", (int(*)(int)) &square); // ok
}
// ok
void f1(int);
void f1(double);

// error. ��ȯŸ�Ը� �ٸ� ��� �����ε� �ȵ�.
void f2(int);
int  f2(int);

// ok
void f3(int a);
void f3(int a, int b);

// error. ����Ʈ ���� ����!
void f4(int a);
void f4(int a, int b = 0);

f4(5);
