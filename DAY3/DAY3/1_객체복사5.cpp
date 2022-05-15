#include <iostream>
#include <vector>
#include <mutex>
#include <string>
#include <complex>

// 객체의 복사 방법   
// 1. 얕은 복사 - 컴파일러 제공 버전 사용
// 2. 깊은 복사
// 3. 참조 계수
// 4. 복사 금지

int main()
{
	complex<double> c1(1, 2); // 1 + 2i
	complex<double> c2 = c1;  // 얕은 복사

	vector<int> v1(10);  // 10개 크기의 동적 배열(크기가 변하는 배열)
	vector<int> v2 = v1; // 깊은 복사

	mutex m1;
	mutex m2 = m1; // error. 복사 생성자 삭제.
}
// 구글 에서 "webkit github" 검색후
// source/wtf/wtf/scope.h 열어 보세요. 
// ScopedExit 클래스 복사 생성자 찾아 보세요