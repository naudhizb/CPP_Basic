// 3_Edit3
#include <iostream>
#include <string>
#include <conio.h>

// 변하지 않은 코드에서 변하는 것을 분리하는 방법
// 1. 가상 함수로 분리 - template method 패턴
// 2. 다른 클래스로 분리

// Validation 정책 클래스는 교체 가능해야 한다 - 인터페이스가 필요
struct IValidator
{
	virtual bool validate(std::string s, char c) = 0;
	
	virtual bool iscomplete(std::string s) { return true; }
	
	virtual ~IValidator() {}
};

// 주민 번호 : 801   1   확인버튼



class Edit
{
	std::string data;
	
	//-----------------------------------
	IValidator* pVal = nullptr;
public:
	void setValidate(IValidator* p) { pVal = p; }
	//--------------------------------------------


	std::string getData()
	{
		data.clear();
		while (1)
		{
			char c = getch();


			if (c == 13 && 
				(pVal == nullptr || pVal->iscomplete(data))  )
				break;

			if ( pVal == nullptr || pVal->validate(data,c) )
			{
				data.push_back(c);
				std::cout << c;
			}
		}
		std::cout << '\n';
		return data;
	}
};
// Edit에 전달할 다양한 Validator를 만들면 됩니다.
class LimitDigitValidator : public IValidator
{
	int limit;
public:
	LimitDigitValidator(int n) : limit(n) {}

	virtual bool validate(std::string s, char c) override
	{
		return s.size() < limit && isdigit(c);
	}
	virtual bool iscomplete(std::string s) override
	{
		return s.size() == limit;
	}
};

int main()
{
	//int a;
	Edit edit;

	LimitDigitValidator v(5);
	edit.setValidate(&v);

	LimitDigitValidator v2(15);
	edit.setValidate(&v2);
	while (1)
	{
		auto s = edit.getData();
		std::cout << s << std::endl;
	}
}




// Edit2					 Edit3
// template method			 strategy
// 상속기반					 포함기반
// 정책이 실행시간 교체 안됨   정책이 실행시간 교체 가능
// 정책이 다른 클래스에서      정책을 다른 클래스에서 사용가능
// 사용안됨.
