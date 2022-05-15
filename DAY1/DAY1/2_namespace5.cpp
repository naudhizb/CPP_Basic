// 10 page 내용입니다.

// string.h   => cstring
// stdlib.h   => cstdlib

//#include <stdio.h> // printf가 global space 에 있습니다
#include <cstdio>    // printf가 std 안에 있습니다.
					 // global namespace 에도 있습니다.
// stdio.h
int printf(const char* fmt, ...) {}   // global 공간

// cstdio
#include <stdio.h>
namespace std
{
	// 전역공간의 이름을 std 안으로 가져오는 코드
	using ::printf; // 이 코드 때문에 std::printf()가 가능
}
int main()
{
	// printf 도 C++ 표준 함수 입니다
	printf("hello\n"); // ok
	std::printf("hello\n"); // 될까요 ?

}