// C++ �Լ� Ư¡ 3. inline   .. 32page

// �ζ��� �Լ� : ȣ���� �ƴ϶� ���� �ڵ带 ġȯ�� �޶���ǹ�
// ���� : ������.
// ���� : ������ ġȯ�Ǹ� �����ڵ�(�������� ũ��)�� Ŀ���� �ִ�

       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }
constexpr int add3(int a, int b) { return a + b; }

int main()
{
	int n1 = add1(1, 2);  // ȣ��
	int n2 = add2(1, 2);  // ġȯ
	int n3 = add3(1, 2);  // ������ �ð��� ����

	int arr[add3(1, 2)];
	arr[0] = 10;
}
// cl  6_�Լ�3.cpp			=> �������� ����
// cl  6_�Լ�3.cpp   /FAs    => 6_�Լ�3.asm ����
// cl  6_�Լ�3.cpp   /FAs /Ob1

// /Ob1 : �ζ��� ġȯ�� ������ �޶�.
// /FAs : ���� C++ �ҽ��� ����ҽ��� �����޶�
// /O2  : �ӵ��� ���� ����ȭ �ɼ�


// notepad 6_�Լ�3.asm   