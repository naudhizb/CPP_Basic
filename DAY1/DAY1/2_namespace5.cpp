// 10 page �����Դϴ�.

// string.h   => cstring
// stdlib.h   => cstdlib

//#include <stdio.h> // printf�� global space �� �ֽ��ϴ�
#include <cstdio>    // printf�� std �ȿ� �ֽ��ϴ�.
					 // global namespace ���� �ֽ��ϴ�.
// stdio.h
int printf(const char* fmt, ...) {}   // global ����

// cstdio
#include <stdio.h>
namespace std
{
	// ���������� �̸��� std ������ �������� �ڵ�
	using ::printf; // �� �ڵ� ������ std::printf()�� ����
}
int main()
{
	// printf �� C++ ǥ�� �Լ� �Դϴ�
	printf("hello\n"); // ok
	std::printf("hello\n"); // �ɱ�� ?

}