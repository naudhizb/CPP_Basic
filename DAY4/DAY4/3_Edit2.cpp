// 3_Edit
#include <iostream>
#include <string>
#include <conio.h>

// validation ��å�� ����ڰ� ��ü �Ҽ� �־�� �Ѵ�.

class Edit
{
	std::string data;
public:

	// ������ ���� �帧�ȿ� �ִ� ���ϴ� ���� �и��Ǿ�� �Ѵ�.
	// ���ϴ� ���� �����Լ��� �����.
	virtual bool validate(char c)
	{
		return true;
	}

	std::string getData()
	{
		data.clear();
		while (1)
		{
			char c = getch();
			if (c == 13) // enter 
				break;

			if (validate(c))
			{
				data.push_back(c);
				std::cout << c;
			}
		}
		std::cout << '\n';
		return data;
	}
};

// Edit �� Validation ��å�� �����Ϸ���
// Edit �� �Ļ� Ŭ������ ���� �����Լ��� ������ �ϸ� �ȴ�.
class NumEdit : public Edit
{
public:
	virtual bool validate(char c) override
	{
		return isdigit(c);
	}
};
int main()
{
	NumEdit edit;
	//AddressEdit edit2;

	while (1)
	{
		auto s = edit.getData();
		std::cout << s << std::endl;
	}
}


