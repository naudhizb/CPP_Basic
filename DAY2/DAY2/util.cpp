// util.cpp

// namespace �� �ִ� �Լ� ���� ��� 
// ��� 1. �Լ� �̸� �տ� namespace �̸� �߰�
/*
#include "util.h"
int util::Sub(int a, int b)
{
	return a - b;
}
*/
#include "util.h"
// ��� 2. namespace �� �ٽ� �����ϰ� �Լ� ����
namespace util
{
	int Sub(int a, int b)
	{
		return a - b;
	}
}