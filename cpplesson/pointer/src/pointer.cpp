#include <iostream>
using namespace::std;

int main(void)
{

	int v1 = 10;	
	// const 常量必须初始化
	// const int *p = &v; 可以改变指针的指向，但不可以改变指针所指向对象的值。
	const int v2 = 8;
	const int *p2 = &v2;
	cout << *p2 << endl;
	p2 = &v1;
	// *p2 = 44;
	cout << v1 << endl;
	cout << *p2 << endl;

	int v3 = 30;
	// int *const p = v3; 可以改变指针所指对象的值，但不可以改变指针的指向。
	int *const p3 = &v3;
	*p3 = 40;
	cout << "v3 = " << v3 << endl;
	p3 = &v2;
	int *p4 = &v2;
	return 0;
}
