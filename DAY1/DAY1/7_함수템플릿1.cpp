// 7_�Լ����ø�1.cpp
#include <iostream>
//#include <stdio.h>

// cl /Tc �ҽ�.cpp     : C ���
// cl /Tp �ҽ�.cpp     : C++ ���

// ��� Ÿ�Կ� �����ϴ� �Լ� ����� - C���
// ��ũ�� �Լ�
//#define square(x) ((x)*(x))

// C++ : int ������ double ������ ���� ������
//    ��� 1. ����ڰ� ���� ������
//    ��� 2. �Լ� ���ø��� ������. �����Ϸ��� �Լ� ����

// Code Bloat : ���ø� ���� �����Ϸ��� �ʹ� ���� �Լ�(Ŭ����)
//				�� ���� �����ڵ尡 Ŀ���� ����
template<typename T> 
T square(T a)
{
	// __FUNCTION__  : �Լ� �̸��� ���� C++ ǥ�� ��ũ��.
	// __FUNCSIG__ : �Լ��̸�+signature. C++ ǥ�� �ƴ�.
	//				  VC++ �� ����
	// __PRETTY_FUNCTION__ : g++���� ����

	std::cout << __FUNCSIG__ << std::endl;

	return a * a;
}

int main()
{
	square(3);
	square(3.4);

	short s = 3;
	square(s);


	int n = 3;
	int ret = square(++n); // ((++n)*(++n))

	printf("%d\n", ret);
	//std::cout << ret << std::endl; // ??	
}