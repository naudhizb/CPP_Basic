#include <iostream>
#include <vector>
#include <mutex>
#include <string>
#include <complex>

// ��ü�� ���� ���   
// 1. ���� ���� - �����Ϸ� ���� ���� ���
// 2. ���� ����
// 3. ���� ���
// 4. ���� ����

int main()
{
	complex<double> c1(1, 2); // 1 + 2i
	complex<double> c2 = c1;  // ���� ����

	vector<int> v1(10);  // 10�� ũ���� ���� �迭(ũ�Ⱑ ���ϴ� �迭)
	vector<int> v2 = v1; // ���� ����

	mutex m1;
	mutex m2 = m1; // error. ���� ������ ����.
}
// ���� ���� "webkit github" �˻���
// source/wtf/wtf/scope.h ���� ������. 
// ScopedExit Ŭ���� ���� ������ ã�� ������