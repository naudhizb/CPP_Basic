// 1_레퍼런스3. 45 page
struct BigData
{
	int buff[1024];
};
// call by value 의 특징 : 값을 수정하지 않겠다는 의도.
//                       하지만, 복사본이 생성되므로
//						메모리 부담이 크다.
//void foo(BigData n)
// 핵심 : call by value 대신 const &가 좋다.!
void foo(const BigData& n)
{
	//n.buff[0] = 10; // error. n은 상수
}
int main()
{
	//int x = 100;
	BigData x;

	// 어떤 함수에서 인자의 값을 절대 수정하면 안된다면
	foo(x);

}

// C++에서 함수 인자 만들기
// 1. 인자의 값을 변경하고 싶을때 - 포인터 또는 레퍼런스
void foo(int* p) {}
void foo(int& r) {}

// 2. 인자의 값을 변경하지 않을때
// A. 인자가 user type 일때 - 일반적으로 크기가 작지 않으므로
//					call by value 보다는 const 참조가 좋다
void foo(const UserType& t) {}

// B. 인자가 primitive type 일때
void foo(int t) {}