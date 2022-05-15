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
	// namespace �ȿ� �ִ� �ɺ��� �����ϴ� 3���� ��� - 8page
	Video::init(); // 1. ������ �̸��� ����� ����

	using Video::init; // 2. using ����(Declaration)
	init();
	::init(); // ������ global namespace �� ����� �޶�.

//	using namespace Video; // 3. using ���þ�(directive)
//	init();				// Video �̸����� �ȿ� �ִ� ���
}						// �ɺ��� Video ���� ���� ����