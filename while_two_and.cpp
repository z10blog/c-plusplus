/* 
 * FileName: while_to_add.cpp
 * Description: 输入两个数字 num1 和 num2，使num1 < num2，然后打印出两个数字中间的所有数字，并且要求每 8 个数字一行输出，附加要求：每一行的前边和后边用{ 和 }括起来。
 * 
 * 输入 9 22
 * 输出格式：
 * {10,11,12,13,14,15,16,17}
 * {18,19,20,21}

*/

#include <iostream>

using namespace::std;

int main(void)
{
	cout << "请输入两个数字: " << endl;
	int num1, num2;
	cin >> num1 >> num2;

	int line = 0;	// 每行输出8个数字标志(当前值代表每行的第几个数字)	

	while(num1 < num2)	// 当num1 < num2 时进入循环
	{
		num1++;		// 输出值
		if(num1 != num2)
		{
			if(line == 0)	// 在每行第一个数字前输出 { 符号
			{
				cout << "{";
			}
			line++;		// 累加
			if(line < 8)	// 当输出的不是一行中的最后一个数字时
			{
				if((num2 - num1) < 8)	// 当剩下最后一行，并且不够8个数字时
				{
					if((num2 - num1) == 1)	// 输出剩下的最后一个数字时
					{
						cout << num1 << "}" << endl;
					}
					if((num2 - num1) != 1)	// 当不是最后一个数字时
					{
						cout << num1 << ",";
					}
				}
				else	// 如果剩下的数字不止1行时
				{
					cout << num1 << ",";
				}
			}
			if(line == 8)	// 如果够一行并且是最后一个数字
			{
				cout << num1 << "}" << endl;
				line = 0;
			}
		}
	}
	return 0;
}
