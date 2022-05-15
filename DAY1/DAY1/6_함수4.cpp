// 6_�Լ�4
// C++ �Լ��� Ư¡ 4. �Լ� ���ø�
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
/*
#define MAKE_SQUARE(T) T square(T a) { return a* a;}

MAKE_SQUARE(int)
MAKE_SQUARE(double)
*/

// ��ó���Ⱑ �ƴ� �����Ϸ��� ���� �ڵ� ����

// �����Ϸ����� �Լ��� �ƴ� �Լ��� ����� Ʋ�� �˷��ش�.
template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);      // int square(int)�Լ� ������. ȣ��
	square<double>(3.4); // double square(double)

	// Ÿ���� �������� ������ �Լ� ���ڸ� ���� Ÿ���� �����Ѵ�
	square(3); //square<int>(3)
	square(3.4);

	printf("%p\n", &square); // error. square�� �Լ��� �ƴϴ�
							// �Լ��� Ʋ(template) �̴�
	printf("%p\n", &square<int>); // square<int>�� �Լ��̸�
}
// 33 page
