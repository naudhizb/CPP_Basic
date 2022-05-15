// 9_STLö��   214 page ~
#include <iostream>

// step . �˻� ���н� ��ȯ��
// 0�� �ƴ� last(x+10) ��ȯ
template<typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first;// == last ? nullptr : first;
}



int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };


	double* p = xfind(x, x + 10, 5);

	if (p == x+10)
		std::cout << "�˻� ����" << std::endl;
	else
		std::cout << *p << std::endl;
}
