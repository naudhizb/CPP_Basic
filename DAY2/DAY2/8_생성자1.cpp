// 8_������1
#include <iostream>

class Point
{
	int x, y;
public:
	// Ư¡ 1. Ŭ�����̸��� ����
	//     2. ��ȯŸ���� ǥ������ �ʴ´�.
	//     3. �����ε� ����(2�� �̻� ������ִ�.)
	//     4. ��ü�� �����ϸ� �����ڰ� ȣ��ȴ�.
	//     5. ����ڰ� �Ѱ��� ������ ������ �����Ϸ��� 
	//	      ���� ���� �����ڸ� �Ѱ� ������ش� - ����Ʈ ������
	//Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

int main()
{
	Point pt1;			// 1
	//Point pt2(0, 0);	// 2
}

