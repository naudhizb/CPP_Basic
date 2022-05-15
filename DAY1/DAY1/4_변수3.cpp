// 4_º¯¼ö1
#include <iostream>
struct Point
{
	int x, y;
};
void foo(int n)    {} // int n = {3}
void goo(Point pt) {}

int main()
{
	foo(3);
	foo({ 3 }); // int n  = {3}

	Point p = { 1,2 };
	goo(p);
	goo({ 1,2 }); // ok.. Point pt = {1,2}
}





