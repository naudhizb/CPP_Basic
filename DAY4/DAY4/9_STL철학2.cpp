// 9_STLö��   214 page ~
#include <iostream>

// step 2. �˻������� �Ϲ�ȭ
// �ݰ��� ���� ǥ��� : [first, last)
char* xstrchr(char* first, char* last,  char c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}



int main()
{
	char s[] = "abcdefg";

	char* p = xstrchr(s, s+4, 'e');




	if (p == nullptr)
		std::cout << "�˻� ����" << std::endl;
	else
		std::cout << *p << std::endl;
}
