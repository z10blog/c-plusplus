#include <iostream> 
#include <string>
using namespace::std;


struct Sales_data {
	string bookNo;
	unsigned units_sold = 0u;
	double revenue = 0.0f;
};

int main(void)
{
	/*Sales_data bo1;
	cout << bo1.bookNo << endl << bo1.units_sold << endl << bo1.revenue 
		<< endl;
	cout << "输入书的名字、售出数量、单价:" << endl;
	cout << bo1.bookNo << endl << bo1.units_sold << endl << bo1.revenue 
		<< endl;
	*/
/*
	string s1;
	string s2("Hello String!");
	string s3(10, 'H');
	cout << s1 << "size:" << s1.size() << endl;
	cout << s2 << "size:" << s2.size() << endl;
	cout << s3 << "size:" << s3.size() << endl;
*/
/*	while(getline(cin, s1))
	{
		if(!s1.empty()){
			if(s1.size() >= 4)
				cout << s1 << endl;
		}
	}
*/

	string str("some string");
	for (auto c : str){
		if(!isspace(c)){
			cout << c;
		}
	}
	cout << endl;
	return 0;
}
