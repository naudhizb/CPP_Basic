// 6_�Լ�7
// C++�Լ� Ư¡6.  ���� ��ȯ Ÿ��  37 page

// suffix return type( trailing return type)

//int square(int a)

auto square(int a) -> int   // C++11 ���� ���� ���ο� �Լ� ���
{
	return a * a;
}
int main()
{
	square(3);
}