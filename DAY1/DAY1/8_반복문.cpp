// 8_�ݺ��� 38 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	// C++11 ���� ������ ���ο� �ݺ���
	for (auto n : x)    // range - for
						// java, C#�� foreach() ��
		std::cout << n << std::endl;


	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;



}