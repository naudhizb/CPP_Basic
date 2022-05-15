// util.h
#pragma once

namespace util
{
	// ��Ģ 1. �Լ� ���ø��� ������ ��ü�� ��� ���Ͽ�
	//         �־�� �մϴ�.
	template<typename T>
	void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}

	// ��Ģ 2. inline �Լ��� ������ü�� ����� �����ؾ� �մϴ�.
	inline int Add(int a, int b)
	{
		return a + b;
	}

	// ��Ģ 3. �Ϲ� �Լ��� ����� ����θ� �ҽ����Ͽ� �����θ�
	//		 �����ϸ� �˴ϴ�.
	int Sub(int a, int b);
}