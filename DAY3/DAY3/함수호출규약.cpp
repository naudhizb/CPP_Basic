// 함수호출규약( Calling Convention)
// => 함수 인자를 어떻게 전달할 것인가 ?
/*
void            f1(int a, int b) { } // __cdecl 이 생략된것
void __cdecl    f2(int a, int b) { } // ret 
void __stdcall  f3(int a, int b) { } // ret 8
						// 돌아가기 전에 스택을 8바이트 파괴
void __fastcall f4(int a, int b) { }

int main()
{
	f1(1, 2);
	f2(1, 2);	// push 2
				// push 1   // 마지막 인자 부터 스택에 넣고
				// call _f2  // 함수 호출
				// add esp, 8  // 인자 전달 스택 파괴	

	f3(1, 2);   // push 2
				// push 1   // 마지막 인자 부터 스택에 넣고
				// call _f3@8  // 함수 호출
				// 스택 파괴 없음.


	f4(1, 2);	// mov edx, 2
				// mov ecx, 1
				// call @f4@8 
				// 레지스터로 보냈으므로 스택 파괴 필요없다.
				// 가장 빠른 방식
}
*/

// cl 함수호출규약.cpp   /FAs   => 함수호출규약.asm

void            f1(int a, int b) { }
void __cdecl    f2(int a, int b) { }
void __stdcall  f3(int a, int b) { }
void __fastcall f4(int a, int b) { }

int main()
{
	f1(1, 2);
	f2(1, 2);
	f3(1, 2);
	f4(1, 2);
}
