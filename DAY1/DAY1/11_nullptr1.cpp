// 11_nullptr1.cpp    54 page

int main()
{
	// 0�� ��ü : 0�� �������� �����ͷ� �Ͻ��� ����ȯ�ȴ�.
	int  n1 = 0; // ok
	int* p1 = 0; // ok

	// C++11. nullptr : ������ 0
	int  n2 = nullptr; // error
	int* p2 = nullptr; // ok
}
