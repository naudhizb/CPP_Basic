// 3_����2.cpp
#include <iostream>
#include "Util.h"
#include <algorithm>  // �� �ȿ� swap�� �ֽ��ϴ�.
// Standard Template Library : STL
// C++ ǥ���� �����ϴ� ���ø� ��� ���̺귯��.
int main()
{
	int x = 10, y = 20;

	std::swap(x, y);

	util::Swap(x, y);
	util::Add(x, y);
	util::Sub(x, y);
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}

const int c = 0; // const �������� ?
				// C��� : external linkage
				// C++ : internal linkage

// internal linkage (���� ����) => ��� ���Ͽ� ���̴� �͵�
// ������ �ɺ��� �ڽ��� ������ ������ ����(����)������ ��밡���Ѱ�
// => �Լ� ���ø�, �ζ��� �Լ�, static ��������, static �Ϲ��Լ�
//    ��ũ��, 

// external linkage (�ܺ� ����)
// �ɺ��� ������Ʈ���� ��� ������ ����(����)���� ��밡���Ѱ�.
// => �Ϲ� �Լ�, ��������,

