// 4_OOP1.cpp     57 page
#include <iostream>

void Add(int ar, int ai, int br, int bi,  // in parameter
		int* sr, int* si) // out parameter
{
	*sr = ar + br;
	*si = ai + bi;
}
int main()
{
	// ���Ҽ� 2���� ���ϴ� �Լ��� ������ ���ô�.
	int ar = 1, ai = 1; // 1 + 1i
	int br = 2, bi = 2; // 2 + 2i
	int sr, si;
	Add(ar, ai, br, bi, &sr, &si);
}