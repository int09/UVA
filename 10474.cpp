// AC
// water problem...
// 为了熟悉STL中的一些操作而已
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>
#include <utility>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
#endif
	int n, ask, ncase = 0;
	while ((cin >> n >> ask) && n && ask)
	{
		vector<int> v;
		int input;
		for (int i = 0; i < n; ++i)
		{
			cin >> input;
			v.push_back(input);
		}
		vector<int> asklist;
		int askinput;
		for (int j = 0; j < ask; ++j)
		{
			cin >> askinput;
			asklist.push_back(askinput);
		}
		sort(v.begin(), v.end());
		cout << "CASE# " << ++ncase << ":" << endl;
		for (int idx = 0; idx < asklist.size(); ++idx)
		{
			vector<int>::iterator p = lower_bound(v.begin(), v.end(), asklist[idx]);
			if (*p == asklist[idx]) {
				cout << asklist[idx] << " found at " << p - v.begin() + 1 << endl;
			}
			else {
				cout << asklist[idx] << " not found" << endl;
			}
		}
	}
	return 0;
}