// 10_explicit
#include <iostream>

class OFile
{
	FILE* file;
public:
	// explicit  ������ : ���� �ʱ�ȭ�ÿ��� ��밡���ϰ�
	//				      ���� �ʱ�ȭ������ ����.
	explicit OFile(const char* name, const char* mode = "wt")
	{
		file = fopen(name, mode);
	}
	// C++�⺻ : �����ڿ��� �ڿ� ȹ���ϸ� �Ҹ��ڿ��� �ڿ� �ݳ�.
	~OFile() { fclose(file); }
};
// �Լ����ڸ� �����ϴ� ���� "���� �ʱ�ȭ" ���� �Դϴ�.
void foo(OFile f) // OFile f = "hello"
{
}

int main()
{
	OFile f1("a.txt");   // direct initialization
	OFile f2 = "a.txt";  // copy   initialization

	foo("hello"); // 


	// FILE* f = fopen("a.txt", "wt");
}

