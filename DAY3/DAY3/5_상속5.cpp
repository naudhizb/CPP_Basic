// ���� ������
class Base
{
private:   int a;
protected: int b;
public:    int c;
};
class Derived : private Base // ���� ������
{							// ��� Ŭ������ ���� ������
};							// ����Ҷ� ���. Ȯ��� �ȵ�

int main()
{
	Base base;    base.c = 10; // ok
	Derived derv; derv.c = 10; // error
}