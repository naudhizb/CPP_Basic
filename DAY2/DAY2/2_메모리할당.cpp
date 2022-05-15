// 2_메모리할당 - 52 page
#include <iostream>
//			malloc			 new
//          함수				 연산자
//			void* 반환		 정확한 타입으로 반환
//			free 해지		 delete 해지
//			생성자 호출안됨	 생성자 호출
//			실패시 0반환		 실패시 예외 발생
int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p2 = new int;
	delete p2;

	int* p3 = new int[20]; // 배열로 할당
	delete[] p3;	// delete 가 아니라 delete[] 로 반환
	//delete p3;  // undefined(미정의 동작) 발생
}

