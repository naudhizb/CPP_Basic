// 3_�����2.cpp - 15 page�Ʒ� �κ�
#include <iostream>
#include <iomanip> // setw
int main()
{
	int n = 10;
	std::cout << n        << std::endl; // 10 ����
	std::cout << std::hex << n << std::endl; // 16����
	std::cout << n        << std::endl; // 16 ����
	std::cout << std::dec << n << std::endl; // 10 ����

	std::cout << std::setw(8) << n << std::endl; //"%8d" 

	std::cout << std::setw(8) << std::setfill('#') << n 
											<< std::endl;
}

// cout ��½� ���� ���� => ������(iomaniplator)��� �մϴ�.
// <iostream> <iomanip> ����� �ʿ��մϴ�.
// www.cppreference.com     setw �˻�.  ����� 16 page ǥ