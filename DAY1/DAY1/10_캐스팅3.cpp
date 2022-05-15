#include <iostream>

// reinterpret_cast : ������ <-> ������ ��ȯ(Ÿ�Ի������)
//					  ������ <-> ���� ��ȯ

int main()
{
	double d = 3.4;
	//int    n =  d; // ok
	int    n = reinterpret_cast<int>(d); // error

	//double* p2 = (double*)&n; // ok.
	//double* p2 = static_cast<double*>(&n); // error
	double* p2 = reinterpret_cast<double*>(&n); // ok

	// �ּ� => ������ ĳ����  �Ǵ� ������ �ּҷ� ĳ����
	int x   = reinterpret_cast<int>(&n);  // ok
	int* p2 = reinterpret_cast<int*>(100);// ok
}

