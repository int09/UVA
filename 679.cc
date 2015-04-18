// AC
// ���ⲻ����ģ�ⷨ����Ȼ��TLE��Ѱ�ҹ��ɷ��������£�
// ��������Ķ����� n = 2����k = 1ʱ���䵽��������k = 2ʱ���䵽��������
// n�㹲�� 2 ^ n - 1���ڵ��Լ� 2 ^ (n - 1)��Ҷ�ӽڵ㣬k = 1ʱ�䵽2 ^ (n - 1)�Žڵ㣬�ɴ�ǰѧ
// ��֪ʶ��֪��k�����ӽ��ı����k * 2�������ӽڵ��� k * 2 + 1��ֱ���ƿɵõ���n���ڵ�ı�
// �š�
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