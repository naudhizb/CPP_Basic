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
	os << "1. ���\n";
	os << "2. ���\n";
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



	// �Ʒ� 2���� ������ �ڵ� �Դϴ�.
//	std::cout << std::endl;
//	std::endl( std::cout );    // endl�� �Լ� �Դϴ�.
							 // ������(iomaniplator) �Լ�

}



