#include <algorithm>
//using namespace std;
namespace Test
{
	int min(int a, int b) { return b < a ? b : a; }
}

int main()
{
	namespace Ax = std;    // namespace ��Ī �����
	//using namespace Test;
	int n = Ax::min(1, 2);
}