// 2_�޸��Ҵ� - 52 page
#include <iostream>
//			malloc			 new
//          �Լ�				 ������
//			void* ��ȯ		 ��Ȯ�� Ÿ������ ��ȯ
//			free ����		 delete ����
//			������ ȣ��ȵ�	 ������ ȣ��
//			���н� 0��ȯ		 ���н� ���� �߻�
int main()
{
	// C ��Ÿ��
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ ��Ÿ��
	int* p2 = new int;
	delete p2;

	int* p3 = new int[20]; // �迭�� �Ҵ�
	delete[] p3;	// delete �� �ƴ϶� delete[] �� ��ȯ
	//delete p3;  // undefined(������ ����) �߻�
}

