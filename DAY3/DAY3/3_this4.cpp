// 3_this4
// 1. �Ϲ� �Լ� �����Ϳ� ��� �Լ� �ּҸ� ������ ����.
// 2. �Ϲ� �Լ� �����Ϳ� static ��� �Լ� �ּҸ� ������ �ִ�.

class Dialog
{
public:
	void Close() {}
	static void Close2() {}
};
void foo() {}

int main()
{
	void(*f1)() = &foo; // ok.
	void(*f2)() = &Dialog::Close; // �ɱ�� ?
			// error. ��� �Լ��� this�� ���޵˴ϴ�

	void(*f3)() = &Dialog::Close2; // ok.
}

