// 6_�Լ���ü2
#include <iostream>

// �Ϲ��Լ� : ���۸� �ְ�, ���°� ����. 
// 0 ~ 9 ������ ����ũ�� ������ ��ȯ�ϴ� �Լ�
int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}


