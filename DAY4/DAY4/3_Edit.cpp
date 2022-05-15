// 3_Edit
#include <iostream>
#include <string>
#include <conio.h>

class Edit
{
	std::string data;
public:
	std::string getData()
	{
		data.clear();
		while (1)
		{
			char c = getch();
			if (c == 13) // enter 
				break; 

			if (isdigit(c))
			{
				data.push_back(c);
				std::cout << c;
			}
		}
		std::cout << '\n';		
		return data;
	}
};


int main()
{
	Edit edit;
	while (1)
	{
		auto s = edit.getData();
		std::cout << s << std::endl;
	}
}


