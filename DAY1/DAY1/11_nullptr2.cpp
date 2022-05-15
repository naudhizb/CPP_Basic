#include <iostream>

void foo(void* p) { std::cout << "void*" << std::endl;}

void foo(int n)   { std::cout << "int" << std::endl; }

void goo(char* p) { std::cout << "goo" << std::endl; }

int main()
{
	foo(0); // int
	foo((void*)0); // void*

/*
#ifdef __cplusplus		// ��� C++�����Ϸ��� �� ��ũ�� ����.
#define NULL 0
#else
#define NULL (void*)0
#endif
*/
	foo(NULL);
	goo(NULL); // void* => char* �� �Ͻ��� ��ȯ �ʿ�
				// C��� : ok..     C++��� : error

	double d = 0.0;
	int n = 0;
	nullptr_t a = nullptr; // nullptr�� Ÿ���� nullptr_t �Դϴ�.
					// nullptr_t Ÿ���� ��� Ÿ���� �����ͷ�
					// �Ͻ��� ����ȯ �˴ϴ�.

	int* p3 = a; // ok.. �ᱹ nullptr 
}