// AC
// 这题不能用模拟法，不然会TLE，寻找规律发现了如下：
// 考虑两层的二叉树 n = 2，当k = 1时下落到左子树，k = 2时下落到右子树。
// n层共有 2 ^ n - 1个节点以及 2 ^ (n - 1)个叶子节点，k = 1时落到2 ^ (n - 1)号节点，由从前学
// 的知识可知当k的左子结点的编号是k * 2，而右子节点编号 k * 2 + 1，直接推可得到第n个节点的编
// 号。
#define LOCAL

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
#endif
	int N;
	while (cin >> N && N != -1)
	{
		while (N--)
		{
			int D, I;
			cin >> D >> I;
			int k = 1;
			for (int i = 0; i < D - 1; ++i)
			{
				if (I % 2) {
					k *= 2;
					I = (I + 1) / 2;
				}
				else {
					k = k * 2 + 1;
					I /= 2;
				}
			}
			cout << k << endl;
		}
	}
	return 0;
}