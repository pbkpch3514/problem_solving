#include <iostream>
#include <string>
#include <list>
using namespace std;
int main() {
	int n;
	cin >> n;
	while(n--) {
		list<char> keylog;
		list<char> pwd;
		
		string s;
		cin >> s;
		for(char ch : s)
			keylog.push_back(ch);
			
		list<char>::iterator cursor = pwd.begin();
		
		for(auto it : keylog) {
			if(it == '<') {
				if(cursor != pwd.begin()) cursor--;
			}
			else if(it == '>') {
				if(cursor != pwd.end()) cursor++;
			}
			else if(it == '-') {
				if(cursor != pwd.begin()) {
					cursor--;
					cursor = pwd.erase(cursor);
				}
			}
			else {
				pwd.insert(cursor, it);
			}				
		}
		for(char ch : pwd)
			cout << ch;
		cout << '\n';	
	}
	return 0;
}
