// 这道题目是set的使用熟悉的例子，目的是掌握set的用法
// 关键在于将所输入的字符串划分出来每一个句子中所有的
// 单词，并且重新改写成全部小写形式，加入到set中，由于
// set自带的从小到大排序功能，可以仅仅将元素插入集合
// 中就好而不用去管其他
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
		// 构造stringstream对象，用string来构造出一个stirng流
		// 这个流可以将其中的单词根据空格分离出来
		stringstream ss(s);
		
		while (ss >> buf)
			dict.insert(buf);
	}
	// 定义set<stirng> 的迭代器，并迭代输出
	for (set<string>::iterator it = dict.begin();
		it != dict.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}