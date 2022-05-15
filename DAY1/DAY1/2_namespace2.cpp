#include <stdio.h>

namespace Audio
{
	void init() { printf("Audio init\n"); }
}
namespace Video
{
	void init() { printf("Video init\n"); }
}
//using Video::init;

void init() { printf("global init\n"); }

int main()
{
	// namespace 안에 있는 심볼에 접근하는 3가지 방법 - 8page
	Video::init(); // 1. 완전한 이름을 사용한 접근

	using Video::init; // 2. using 선언(Declaration)
	init();
	::init(); // 무조건 global namespace 를 사용해 달라.

//	using namespace Video; // 3. using 지시어(directive)
//	init();				// Video 이름공간 안에 있는 모든
}						// 심볼을 Video 없이 접근 가능