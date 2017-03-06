#include <iostream>
#include <vector>
#include <string>
using namespace::std;

int main(void)
{
	/*
	vector<int> ivec;
	ivec.push_back(1);
	cout << ivec.size() << endl;

	vector<unsigned> scores(11,0);
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
		{
			++scores[grade/10];
		}
	}
	*/
	/*
	vector<string> str;
	cout << "Please input string:" << endl;
	string s;
	while (cin >> s)
	{
		str.push_back(s);
	}
	cout << "***********" << "结果" << "***************" << endl;
	for (decltype(str.size()) i = 0; i < str.size(); i++)
	{
		for (auto &c : str[i])
		{
			c = toupper(c);
		}
		cout << str[i] << endl;
	}
	*/
	vector<int> iint;
	int i;
	while (cin >> i)
	{
		iint.push_back(i);
	}
	// 依次输出vector中第一个数字和最后一个数字相加，第二个和倒数第二个相加
	if (!iint.empty() && (iint.size() % 2) == 0)
	{
		for (int i1 = 0; i1 <= (iint.size() / 2) - 1; ++i1)
		{
			cout << iint[i1] + iint[(iint.size() - 1) - i1] << endl;
		}
	}
	return 0;
}
