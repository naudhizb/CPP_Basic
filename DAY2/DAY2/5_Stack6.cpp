#include <iostream>

// 버전 6. 자료구조의 변경 - 동적 메모리 할당 사용
//         소멸자 도입. 소멸자에서 객체가 사용하던 자원 해지
//			소멸자는 꼭 만들어야 하는 것이 아니라 필요한 경우만
//			만들면 된다.

class Stack
{
	int* buff;
	int idx;
public:
	Stack(int size = 10) 
	{ 
		buff = new int[size];
		idx = 0; 
	}

	// 소멸자 : 클래스 이름앞에 ~ 가 붙는 함수
	//		   객체 파괴시 자동으로 호출된다.
	~Stack() { delete[] buff; }


	void push(int a) { buff[idx++] = a; }
	int  pop() { return buff[--idx]; }
};
int main()
{
	//Stack s1; // 디폴트값 10 사용

	Stack s1(100); // 객체를 만들면 생성자 호출
					// 생성자에 인자로 100 전달

	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}
