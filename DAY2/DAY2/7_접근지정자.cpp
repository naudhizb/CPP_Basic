// 7_����������    74page ~

// ��� ����Ÿ�� private �� ���Ƽ�
// �ܺ��� �߸��� �������� ��ü�� ���°� �Ҿ��� ����
// ���� ���´�!
// "ĸ��ȭ(encapsulation)", "���� ����"

struct Bike
{
private:
	int gear;

public:
	Bike(int n = 1) { if ( n > 0) gear = n; }

	void changeGear(int n)  
	{	
		if ( n > 0 )
			gear = n;	
	}
};

int main()
{
//	Bike b = { 5 }; // C ��Ÿ���� �ʱ�ȭ�� ��� ����Ÿ��
					// public �� ��츸 ����..

	Bike b(5);

	//b.gear = -10;
	b.changeGear(-10);
}
