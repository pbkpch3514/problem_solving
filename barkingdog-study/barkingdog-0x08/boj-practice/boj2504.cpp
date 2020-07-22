#include <iostream>
#include <stack>
#include <string>
using namespace std;
typedef long long ll;
int main() {
	string s;
	cin >> s;
	stack<char> br;
	
	bool error = false;
	ll ans = 0;
	int tmp = 1;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '(') {
			tmp *= 2;
			br.push(s[i]);
		}		
		else if(s[i] == '[') {
			tmp *= 3;
			br.push(s[i]);
		}
		else if(s[i] == ')' && (br.empty() || br.top() != '(')) {
			error = true;
			break;
		}
		else if(s[i] == ']' && (br.empty() || br.top() != '[')) {
			error = true;
			break;
		}
		else if(s[i] == ')') {
			if(s[i-1] == '(') {
				ans += tmp;
			}
			br.pop();
			tmp /= 2;
		}
		else if(s[i] == ']') {
			if(s[i-1] == '[') {
				ans += tmp;
			}
			br.pop();
			tmp /= 3;
		}
	}
	if(error || !br.empty()) {
		cout << 0 << '\n';
		return 0;
	}
	cout << ans << '\n'; 
	return 0;
}
