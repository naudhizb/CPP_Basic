// 4_변수5
// 23 page ~

// typedef int DWORD;
// typedef void(*PF)();

// typedef : 타입에 대한 별칭(alias) 만들기
// using   : 타입에 대한 별칭 + 템플릿 별칭 만들기
//			

// C++11 using 
using DWORD = int;
using PF = void(*)();

int main()
{
	DWORD n;  // int
	PF    f;  // 함수 포인터
}

