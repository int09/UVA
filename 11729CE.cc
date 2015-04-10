// 提示CE，但是在我本机的VS2010正常编译通过，G++4.8貌似是这个编译器，提示
// 说pair的问题，修改了一下，但是连接UVA完蛋了。。。
// 跟着苗兄的组织一起做题，这个是UVA上的题目，也是刘汝佳书上的例题。
#define LOCAL
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>
#include <utility>
// N个servant，第i个要花Bi的时间交待任务，她用Ji的时间完成。
// 尽早完成任务。给出最短时间。
// 可以得知应该先交待最浪费时间的任务，贪心法。

using namespace std;

typedef pair<int, int> mypair;
int cmp(mypair a, mypair b)
{
	return a.second > b.second;
}

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
#endif
	pair<int, int> pr;
	vector<mypair> vp;
	int n, kase = 0;
	while ((cin >> n) && n)
	{
		int ans = 0, start = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> pr.first >> pr.second;
			vp.push_back(pr);
		}
		sort(vp.begin(), vp.end(), cmp);
		for (int k = 0; k < n; ++k)
		{
			start += vp[k].first;
			ans = max(ans, start + vp[k].second);
		}
		cout << "Case " << ++kase << ": " << ans << endl;
	}
	return 0;
}
