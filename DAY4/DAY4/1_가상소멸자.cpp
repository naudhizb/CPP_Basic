// 1_����Ҹ���     149 page
#include <iostream>

// �ٽ� : ��� ��� Ŭ������ �Ҹ��ڴ� �ݵ�� �����Լ� �̾�� �Ѵ�.

class Base
{
public:
	virtual ~Base() {} // ��� Ŭ������ �Ҹ��ڰ� �����̸�
					   // ��� �Ļ�Ŭ������ �Ҹ��ڴ� �����Լ��̴�
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "�ڿ��Ҵ�" << std::endl; }
	virtual ~Derived() { std::cout << "�ڿ�����" << std::endl; }
};
int main()
{
	Base* p = new Derived; // ��� Ŭ���������� = &�Ļ�Ŭ����
	delete p; 
}
