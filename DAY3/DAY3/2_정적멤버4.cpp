class Car
{
	int color;
	static int cnt;
public:
	// ������ ������ ��� ��� ������
	void foo()	{
		color = 0;	// 1
		cnt = 0;	// 2
		goo();		// 3
	}
	// �ٽ� : static ��� �Լ� �ȿ����� static ��� ����Ÿ�� �����Ҽ�
	//        �ִ�.
	static void goo()	{
		color = 0;	// 4. error
		cnt = 0;	// 5. ok
		foo();		// 6. error
	}
};
int Car::cnt;  // �ʱⰪ�� �������� ������ 0(���������� Ư¡�� ����)
int main()
{
	// ��Ʈ : static ��� �Լ��� ��ü�� ��� ȣ���Ҽ� �ֽ��ϴ�.
	Car::goo();
}