// 6_�Լ�5
// C++ �Լ� Ư¡ 5. �Լ� ����. C++11���� �߰��� ���
// 35 page

int add(int a, int b)
{
	return a + b;
}
// 36 page �Ʒ� ǥ
// �Լ��� �������� ������ : ������ �Ͻ��� ��ȯ�� ���ؼ� 
//						�����̸��� �ٸ��Լ� ȣ�� ����

// �Լ��� ���� ���� : ��������� link    ���� �߻�
// �Լ��� ���� �Ҷ�   : ��������� compile ���� �߻�

//double add(double a, double b); // �ٽ�. ���� ����

double add(double a, double b) = delete; // C++11�� �Լ�����
										// ����
int main()
{
	add(1, 2);
	add(2.3, 3.2); // compile error. ������ �Լ� ���
}
