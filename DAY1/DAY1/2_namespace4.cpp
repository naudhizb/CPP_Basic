#include <algorithm>
//using namespace std;
namespace Test
{
	int min(int a, int b) { return b < a ? b : a; }
}

int main()
{
	namespace Ax = std;    // namespace º°Äª ¸¸µé±â
	//using namespace Test;
	int n = Ax::min(1, 2);
}