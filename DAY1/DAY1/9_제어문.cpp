// 9_���
#include <iostream>
// 39 page.. 
int foo()
{
	return 0;
}
int main()
{
	switch (int n = foo(); n )
	{
	case 0: break;
	case 1: break;
	}
	// init control statement
	// �ʱ�ȭ ������ ���� ���
	// C++17���� - /std:c++latest �ʿ�
	if ( int ret = foo(); ret == 0 )
	{
		//printf("%d\n", ret);
	}

	int ret = foo();
	if ( ret == 0)
	{ 
	}
}
