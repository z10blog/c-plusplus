#include <iostream>
using namespace::std;

int main(void)
{
	/* 例子1 计算1 ～ 10 之间的和
	int sum = 0,val = 1;
	while(val <= 10)
	{
		// val 从1开始自加直到<=10
		// val 默认值为1, sum = val + sum
		// 打印出 sum
		sum += val;
		val++;
	}

	cout << sum;
	*/


	/* 例子2
	int sum = 50, val = 51;
	while(val <= 100)
	{
		sum += val;		// sum = sum + val;
		val++;
	}
	cout << "50 ~ 100 : " << sum << endl;;
	*/


	/* 例子3 
	int sum = 10;
	while(sum >= 0)
	{
		cout << "sum = " << sum << endl;
		sum--;
	}
	*/

	// 提示用户输入两个整数，打印出这两个整数所指定范围的所有整数
	int num1, num2;
	cout << "请输入两个整数:";
	cin >> num1 >> num2;

	while(num1 < num2)
	{
		num1++;
		cout << num1 << endl;
	}

	return 0;
}
