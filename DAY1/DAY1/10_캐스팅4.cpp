// const_cast : 

int main()
{
	const int c = 10;

	int* p1 = &c;       // error
	int* p2 = (int*)&c; // ok
	int* p3 = static_cast<int*>(&c);      // error
	int* p4 = reinterpret_cast<int*>(&c); // error. 
						// ��������� �ȵ�.

	int* p5 = const_cast<int*>(&c); // ok..
						// ���� Ÿ���� const �Ӽ� ����
}