// 5_cout			187 page
#include <iostream>

class ostream
{
public:
	ostream& operator<<(const char* s) {printf("%s\n", s); return *this;	}
	ostream& operator<<(int n)    { printf("%d\n", n); return *this; }
	ostream& operator<<(double d) { printf("%f\n", d); return *this; }
};
ostream cout;

int main()
{
	cout << "hello" << "AAA\n";
	cout << 3 << "   " << 3.4 << "\n";


	// �Ʒ� 2���� ������ �ڵ��Դϴ�.
//	std::cout << "hello\n";
//	std::cout.operator<<("hello\n");
}



