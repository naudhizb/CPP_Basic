// 3_입출력2.cpp - 15 page아래 부분
#include <iostream>
#include <iomanip> // setw
int main()
{
	int n = 10;
	std::cout << n        << std::endl; // 10 진수
	std::cout << std::hex << n << std::endl; // 16진수
	std::cout << n        << std::endl; // 16 진수
	std::cout << std::dec << n << std::endl; // 10 진수

	std::cout << std::setw(8) << n << std::endl; //"%8d" 

	std::cout << std::setw(8) << std::setfill('#') << n 
											<< std::endl;
}

// cout 출력시 포맷 지정 => 조정자(iomaniplator)라고 합니다.
// <iostream> <iomanip> 헤더가 필요합니다.
// www.cppreference.com     setw 검색.  교재는 16 page 표