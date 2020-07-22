#include <iostream>
#include <string>
using namespace std;
void check(string s) {
	int cnt = 0;
	for(auto ch : s) {
		if(ch == '(') cnt++;
		if(ch == ')') cnt--;
		if(cnt < 0) {
			cout << "NO" << '\n';
			return;
		}	
	}
	if(!cnt)  {
		cout << "YES" << '\n';
		return;	
	}
	else {
		cout << "NO" << '\n';
		return;	
	}
}
int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		string s;
		cin >> s;
		check(s);
	}
	return 0;
}
