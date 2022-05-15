// 3_Edit
#include <iostream>
#include <string>
#include <conio.h>

// validation 정책은 사용자가 교체 할수 있어야 한다.

class Edit
{
	std::string data;
public:

	// 변하지 않은 흐름안에 있는 변하는 것은 분리되어야 한다.
	// 변하는 것을 가상함수로 만든다.
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

// Edit 의 Validation 정책을 수정하려면
// Edit 의 파생 클래스를 만들어서 가상함수를 재정의 하면 된다.
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


