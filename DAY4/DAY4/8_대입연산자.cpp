// 8_���Կ�����

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};
int main()
{
	Point p1(1, 2); // ok. ������
	Point p2(p1);   // ok. ���� ������ - ����ڰ� ������ ������
					// �����Ϸ��� ����

	p2 = p1; // p2.operator=(p1) �� �ʿ��ϴ�.
			// ����ڰ� ������ ������ �����Ϸ��� ������ �ش�.
}
