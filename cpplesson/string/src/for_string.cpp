#include <iostream>
#include <string>
using namespace::std;

int main(void){
	string s("hello world!");
	for (char &x : s){
		x = 'X';
	}
	cout << s << endl;
	string s1;
	cout << s1.size() << s1[0] << endl;
	if (s1.emtpy())
	
	return 0;
}
