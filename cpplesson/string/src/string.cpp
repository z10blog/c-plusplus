#include <iostream>
#include <string>

using namespace::std;

int main(void)
{
	string s("some string");
/*	for (auto &c : s){
		c = toupper(c);
	}
	cout << s << endl;

	if (!s.empty()){
		s[1] = tolower(s[1]);
	}
	cout << s << endl;
*/
	/*
	for (decltype(s.size()) index = 0;
			index != s.size() && !isspace(s[index]); ++index){
		s[index] = toupper(s[index]);
	}
	cout << s << endl;
	*/

	const string hexdigits = "0123456789ABCDEF";

	string result;
	string::size_type n;
	while (cin >> n){
		if (n < hexdigits.size()){
			result += hexdigits[n];
		}
	}

	cout << "Your hex number is: " << result << endl;
	return 0;
}
