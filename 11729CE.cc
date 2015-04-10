// ��ʾCE���������ұ�����VS2010��������ͨ����G++4.8ò�����������������ʾ
// ˵pair�����⣬�޸���һ�£���������UVA�군�ˡ�����
// �������ֵ���֯һ�����⣬�����UVA�ϵ���Ŀ��Ҳ����������ϵ����⡣
#define LOCAL
#include <iostream>
#include <fstream>
#include <queue>
#include <algorithm>
#include <utility>
// N��servant����i��Ҫ��Bi��ʱ�佻����������Ji��ʱ����ɡ�
// ����������񡣸������ʱ�䡣
// ���Ե�֪Ӧ���Ƚ������˷�ʱ�������̰�ķ���

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
