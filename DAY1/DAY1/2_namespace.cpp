// 2_namespace.cpp - ���� 7 page
#include <stdio.h>
//�ٽ� 1. ���õ� �Լ�/����ü/�������� ���� �ϳ��� �̸���������
//        �����ϴ� ���
// 2. �̸��� �浹�� ����, ���α׷��� �������� �����Ҽ� �ִ�
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