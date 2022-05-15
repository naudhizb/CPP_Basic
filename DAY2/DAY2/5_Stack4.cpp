#include <iostream>

// 버전 4. 정보 은닉 - "잘못 사용하기 어렵게 설계해라"
//			외부의 잘못된 사용으로 객체의 상태가 불안해
//			지는 것을 막는다.

// private, public : 접근 지정자

//struct Stack  // 접근 지정자 생략시 디폴트가 public
class Stack     // 접근 지정자 생략시 디폴트가 private
{
//private:			// 멤버 함수에서만 접근 가능
	int buff[10];	// 멤버가 아닌 함수는 접근 안됨
	int idx;

public:				// 모든 함수에서 접근가능
	void init()      { idx = 0; }
	void push(int a) { buff[idx++] = a; 	}
	int  pop()       { return buff[--idx]; }
};
int main()
{
	Stack s1; 
	//s1.idx = 0; // error
	s1.init();
	s1.push(10);
	s1.push(20);

	//s1.idx = 100;

	std::cout << s1.pop() << std::endl;
}
