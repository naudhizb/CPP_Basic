int main()
{
	const int c = 10;

	// c�� �ּҸ� double* �� ��� �ͽ��ϴ�.
	// ��� 1. C ��Ÿ�� ĳ����
	double* p = (double*)&c;

	// ��� 2. C++ explicit ĳ����(4���� ĳ����) Ȱ��
	double* p1 = reinterpret_cast<double*>(
						const_cast<int*>(&c)); // �غ�����..
}





