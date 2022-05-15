// 9_mangling

// C  �� ������ �ϸ� : �Լ��̸� Add(gcc),  _Add(vc)
// C++�� ������ �ϸ� : ?Add@XXYYH@Z(VC++), ??(g++)

// name mangling :  C++ �����Ϸ��� �Լ��̸��� �����ϴ� ��
// => �Լ� �����ε� ������ Add �Լ��� ������ �ϼ� �����Ƿ�
int Add(int a, int b)
{
	return a + b;
}

int main()
{
	Add(1, 2);
}

// Add.h
// extern "C" : �Լ� �Ǵ� ������ C����� mangling�� ����Ѵٰ�
//              �˷� �ִ� ��
//extern "C" int Add(int a, int b);
// ��� : C���� ���̺귯�� ���鶧 �� ����� �Ʒ� ó�� ���弼��
//       �׷��� Add �Լ��� .c �� .cpp���� ��� ��밡���մϴ�.

// ���ο����.h
#ifdef __cplusplus
extern "C" {
#endif

//#include"���ǵ帮�� ���"
	int Add(int a, int b);

#ifdef __cplusplus
}
#endif



// Add.c
int Add(int a, int b)
{
	return a + b;
}
// main.c
#include "Add.h"
                                
int main()
{
	Add(1, 2);
}


#include<stdio.h>

printf("heelo");