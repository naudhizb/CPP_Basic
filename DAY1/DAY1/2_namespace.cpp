// 2_namespace.cpp - 교재 7 page
#include <stdio.h>
//핵심 1. 관련된 함수/구조체/전역변수 등을 하나의 이름공간에서
//        관리하는 기술
// 2. 이름의 충돌을 막고, 프로그램을 논리적으로 구분할수 있다
namespace Audio
{
	void init() { printf("Audio init\n");	}
}
namespace Video
{
	void init()	{ printf("Video init\n");	}
}
void init() { printf("global init\n");}

int main()
{
	init();
	Audio::init();
	Video::init();
}