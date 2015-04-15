// �����Ŀ��set��ʹ����Ϥ�����ӣ�Ŀ��������set���÷�
// �ؼ����ڽ���������ַ������ֳ���ÿһ�����������е�
// ���ʣ��������¸�д��ȫ��Сд��ʽ�����뵽set�У�����
// set�Դ��Ĵ�С���������ܣ����Խ�����Ԫ�ز��뼯��
// �оͺö�����ȥ������
#define	LOCAL

#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <sstream>

using namespace std;

int main()
{
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
#endif

	set<string> dict;
	string s, buf;
	while (cin >> s)
	{
		for (int i = 0; i < s.length(); ++i)
			if (isalpha(s[i]))
				s[i] = tolower(s[i]);
			else
				s[i] = ' ';
		// ����stringstream������string�������һ��stirng��
		// ��������Խ����еĵ��ʸ��ݿո�������
		stringstream ss(s);
		
		while (ss >> buf)
			dict.insert(buf);
	}
	// ����set<stirng> �ĵ����������������
	for (set<string>::iterator it = dict.begin();
		it != dict.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}