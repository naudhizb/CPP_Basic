// �ٽ� : ��� ��� �Լ��� ������ �ƴ� "�ʼ�����" �Դϴ�.
//       ��ü�� ���¸� �������� ���� ��� ��� �Լ�(getter)��
//       �ݵ�� ��� �Լ��� �ؾ� �մϴ�.

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

	int getArea() const { return w * h; }
};
//void foo(Rect r) // call by value
void foo(const Rect& r) 
{
	int n = r.getArea(); //???
}

int main()
{
	Rect r(1, 1, 10, 10);
	int n = r.getArea(); // ok
	foo(r);
}



