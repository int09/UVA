// 这题是模拟UNIX的ls命令输出的格式化，包含计算行列对应
// 的index值，对于string数组的排序，对于STL的应用并不是
// 很多。
#define LOCAL

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

void print(const string &s, int len, char extra)
{
	cout << s;
	for (int i = 0; i < len - s.length(); ++i)
		cout << extra;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif
	const int maxcol = 60;
	const int maxn = 100 + 5;
	string filenames[maxn];
	int n;
	while (cin >> n)
	{
		int M = 0;
		// Count the max length of all filenames
		for (int i = 0; i < n; ++i)
		{
			cin >> filenames[i];
			M = max(filenames[i].length(), M);
		}
		int col = (maxcol - M) / (M + 2) + 1;
		int row = (n - 1) / col + 1;
		print("", 60, '-');
		cout << '\n';
		sort(filenames, filenames + n);

		for (int r = 0; r < row; ++r) {
			for (int j = 0; j < col; ++j)
			{
				int index = j * row + r;
				if (index < n)
					print(filenames[index], j == col - 1 ? M : M + 2, ' ');
			}
			cout << '\n';
		}
	}
	return 0;
}
