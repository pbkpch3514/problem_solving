#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	while(true) {
		string a;
		getline(cin, a);
		if(a == ".") break;
		stack<char> s;
		bool ok = true;
		for(char ch : a) {
			if(ch == '(' || ch == '[') s.push(ch);
			
			else if(ch == ')') {
				if(s.empty() || s.top() != '(') {
					ok = false;
					break;
				}
				s.pop();
			}
			else if(ch == ']') {
				if(s.empty() || s.top() != '[') {
					ok = false;
					break;
				}
				s.pop();
			}	
		}
		if(!s.empty()) ok = false;
		if(ok) cout << "yes" << '\n';
		else cout << "no" << '\n'; 
	}
	return 0;
}
