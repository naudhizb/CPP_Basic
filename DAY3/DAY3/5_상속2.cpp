// 5_���2

class Base  // base class, super class  , ��� Ŭ����
{
private:   // �ڽ��� ��������� ���� ����
	int a;

protected: // �ڽŰ� �Ļ�Ŭ�������� ���ٰ���
	int b;

public:    // ��𼭳� ���� ����.
	int c;
};

class Derived : public Base   // Derived class, subclass, �Ļ�Ŭ����
{
public:
	void foo()	{
		a = 0; // error. ��� Ŭ������ private �����
				// �Ļ�Ŭ������ �����Ҽ� ����.
		c = 0; // ok
	}
};
int main()
{
	Base base;
	base.a = 0; // error
	base.c = 0; // ok
}