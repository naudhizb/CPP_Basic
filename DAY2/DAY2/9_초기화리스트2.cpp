
// Ŭ�����ȿ� const ���, ���� ��� ���� �ִٸ� 
// �ݵ�� �ʱ�ȭ ����Ʈ�� ����ؾ� �Ѵ�. - 87 page

class Test
{
	int& r;
	int n = 0;    // C++98������ error. C++11 ���Ͱ���
	const int c = 10;
public:
	Test() {}
	Test(int a, int b) : n(a), c(b) // ok...
	{
		//n = a;
		//c = b; // ??error. �����ϴ� �ڵ� �Դϴ�.
	}
};
int main()
{
	Test t(1, 10);
	//const int c; // C ��� : ���, C++ : ����.
}