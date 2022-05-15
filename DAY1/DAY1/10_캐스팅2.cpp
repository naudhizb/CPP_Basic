#include <iostream>

// static_cast : �������� �°� �������� ���� ��츸 ���
//          void*=> �ٸ� Ÿ��*,
//			��Ӱ����� ĳ���� ��.
//          �ݵ�� �������� �־�� �Ѵ�


int main()
{
	double d = 3.4;
	int    n = d;

	//int* p1 = malloc(100);     // C��� : ok. C++ : ����
	//int* p1 = (int*)malloc(100); // ok

	// void* => �ٸ�Ÿ��* �� ���
	int* p1 = static_cast<int*>( malloc(100) ); // C++ ĳ����


	   	 
	//double* p2 = (double*)&n; // ok.
	double* p2 = static_cast<double*>(&n); // error


	const int c = 10;
	//int* p3 = (int*)&c; // ok
	int* p3 = static_cast<int*>(&c); // error.
}

