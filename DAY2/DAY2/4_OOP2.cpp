#include <iostream>

// �ٽ� 1. S/W ���߿� �ʿ��� ����Ÿ Ÿ���� ���� �����Ѵ�.

// �ٽ� 2. Ÿ���� ���鶧 ���¸� ��Ÿ���� ����Ÿ�� 
//		   ���¸� �����ϴ� �Լ��� ���� ���´�
//     C���   : ����ü���� ����Ÿ �� ����
//     C++��� : ����ü�� �Լ��� ������ �ִ�.


// ���Ҽ���� Ÿ���� ���� ��������.
struct Complex
{
	int real;
	int image;

};
Complex Add(Complex c1, Complex c2)
{
	Complex temp;
	temp.real  = c1.real  + c2.real;
	temp.image = c1.image + c2.image;
	return temp;
}
int main()
{
	Complex c1 = { 1,1 };
	Complex c2 = { 2,2 };
	Complex c3 = Add(c1, c2);
}