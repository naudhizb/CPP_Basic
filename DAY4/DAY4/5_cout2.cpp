// 5_cout			187 page
#include <iostream>

class ostream
{
public:
	ostream& operator<<(const char* s) { printf("%s", s); return *this; }
	ostream& operator<<(int n) { printf("%d", n); return *this; }
	ostream& operator<<(double d) { printf("%f", d); return *this; }
	
	ostream& operator<<( ostream&(*f)(ostream&) ) 
	{ 
		f(*this);
		return *this; 
	}
};
ostream cout;

ostream& endl(ostream& os)
{
	os << "\n";
	return os;
}
ostream& menu(ostream& os)
{
	os << "1. 김밥\n";
	os << "2. 라면\n";
	return os;
}
ostream& tab(ostream& os)
{
	os << "\t";
	return os;
}
int main()
{
	cout << "A" << tab << "B" << tab << "C" << endl;

	cout << menu; // cout.operator<<(menu)
	cout << endl; // cout.operator<< ( endl )



	// 아래 2줄은 동일한 코드 입니다.
//	std::cout << std::endl;
//	std::endl( std::cout );    // endl은 함수 입니다.
							 // 조정자(iomaniplator) 함수

}



