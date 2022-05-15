// 접근 변경자
class Base
{
private:   int a;
protected: int b;
public:    int c;
};
class Derived : private Base // 접근 변경자
{							// 기반 클래스의 접근 권한을
};							// 축소할때 사용. 확대는 안됨

int main()
{
	Base base;    base.c = 10; // ok
	Derived derv; derv.c = 10; // error
}