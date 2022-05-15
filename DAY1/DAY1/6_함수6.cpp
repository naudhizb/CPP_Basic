#include <iostream>

/*
// overloading resolution : �Լ� ã�� ����
void foo(int n)    { std::cout << "int" << endl; }
void foo(short n)    { std::cout << "short" << endl; }

//void foo(float n)  { std::cout << "float" << endl; }
void foo(double n) { std::cout << "double" << endl; }
void foo(...)      { std::cout << "..." << endl; }
//template<typename T>
//void foo(T n)      { std::cout << "T" << endl; }

int main()
{
	float f = 3.4f;
	foo(f); // 1. exactly matching - float
			// 2. template ����ؼ� float ���� ���� - T
			// 3. promotion (����Ÿ �ս��� ���� ��ȯ)
			//						- double
			// 4. standard conversion(����Ÿ �ս��� �־
			//	  float -> int ��ȯ ���� - int
			// 5. ������ ������ ��������
}

*/
void goo(int, int) {}		// 1
void goo(short, short) = delete;	// 2

int main()
{
	goo(1.3, 2.3); // 1�� �������� 2�� �������� �𸥴ٴ� ����

}

