#include <iostream>
using namespace::std;


/*
 *	引用： 引用即别名,是为对象起了一个另外的名字
 * 特点: 
 * 1.定义引用时必须初始化 
 * 2.一旦定义，将不能重新绑定到另一个对象
 * 3.引用智能绑定在对象上，而不能与字面值或某个表达式的计算结果绑定在一起。 
 * # 引用并非对象，相反的，它只是为一个已经存在的对象所起的另外一个名字。
 */
int main(void)
{
	/*int ival = 1024;
	int &refVal = ival;
	cout << "ival = " << ival << endl;
	cout << "refVal = " << refVal << endl;
	refVal = 0;
	cout << "refVal = " << refVal << endl;
	cout << "ival = " << ival << endl;
	*/

	int i, &ri = i;
	i = 5;
	ri = 10;
	cout << i << " " << ri << endl;
	return 0;
}
