#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	int ans = 0;
	stack<int> br;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '(') br.push(s[i]);
		else {
			br.pop();
			if(s[i-1] == ')') ans += 1;
			else {
				ans += br.size();
			}
		}	
	}
	cout << ans << '\n';
	return 0;
}
