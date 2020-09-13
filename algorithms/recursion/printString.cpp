#include <iostream>
#include <string>
using namespace std;
void printString(string s) {
	if(s.length() == 0) return;
	cout << s[0];
	printString(s.substr(1));
}
int main() {
	string s;
	cin >> s;
	printString(s);
	cout << '\n';
	return 0;
}
