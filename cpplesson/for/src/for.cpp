#include <iostream>
using namespace::std;

int main(void)
{
	// 打印-100 ~ 100 之间所有整数的和
	/* int sum = 0;
	for(int i = -100; i <= 100; i++)
	{
		sum += i;
		cout << sum << endl;
	}
	*/

	// 打印出 50 ～ 100 ，之间所有整数的和
	/*int sum = 50;
	for(int i = 51; i <= 100; i++)
	{
		sum += i;
		cout << sum << endl;
	}
	cout << "sum = " << sum << endl;
	*/
	// 用 -- 实现打印出 10 ～ 0 之间的所有整数
	/*
	for(int i = 10; i >= 0; i--)
	{
		cout << i << endl;
	}
	*/

	/*cout << "请输入两个整数";
	int num1,num2;
	cin >> num1 >> num2;
	for(int i = num1; i <= num2; i++)
	{
		cout << i << endl;
	}
	*/
	int v1,v2,v3,v4;
	cin >> v1;
	cin >> v2;
	cin >> v3;
	cin >> v4;
	cout << v1 + v2 + v3 + v4 << endl;
	return 0;
}
