// 3_Edit3
#include <iostream>
#include <string>
#include <conio.h>

// ������ ���� �ڵ忡�� ���ϴ� ���� �и��ϴ� ���
// 1. ���� �Լ��� �и� - template method ����
// 2. �ٸ� Ŭ������ �и�

// Validation ��å Ŭ������ ��ü �����ؾ� �Ѵ� - �������̽��� �ʿ�
struct IValidator
{
	virtual bool validate(std::string s, char c) = 0;
	
	virtual bool iscomplete(std::string s) { return true; }
	
	virtual ~IValidator() {}
};

// �ֹ� ��ȣ : 801   1   Ȯ�ι�ư



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
// Edit�� ������ �پ��� Validator�� ����� �˴ϴ�.
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
// ��ӱ��					 ���Ա��
// ��å�� ����ð� ��ü �ȵ�   ��å�� ����ð� ��ü ����
// ��å�� �ٸ� Ŭ��������      ��å�� �ٸ� Ŭ�������� ��밡��
// ���ȵ�.
