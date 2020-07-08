#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
	int n;
	list<char> e;
	string s;
	cin >> s;
	
	for(char ch : s) // input string
		e.push_back(ch);
	
	list<char>::iterator cursor = e.end();
	
	cin >> n; // input case
	while(n--) {
		string cmd;
		cin >> cmd;
		if(cmd == "P") {
			char ch;
			cin >> ch;
			e.insert(cursor, ch);
		}
		if(cmd == "L") {
			if(cursor != e.begin())
				cursor--;
		}
		if(cmd == "D") {
			if(cursor != e.end())
				cursor++;
		}
		if(cmd == "B") {
			if(cursor != e.begin()) {
				cursor--;
				cursor = e.erase(cursor);
			}
		}	
	}
	
	for(char ch : e)
		cout << ch;
	return 0;
}
