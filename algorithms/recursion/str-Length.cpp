#include <iostream>
#include <string>
using namespace std;
int len(string s) {
	if(s == "") return 0;
	return 1 + len(s.substr(1));
}
int main() {
	string s;
	cin >> s;
	cout << "length of " << s << " is " << len(s) << '\n'; 
	return 0;
}
