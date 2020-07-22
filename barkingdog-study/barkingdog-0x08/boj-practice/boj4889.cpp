#include <iostream>
#include <string>
using namespace std;
int main() {
	int n = 1;
	while(true) {
		int cnt = 0;
		int ans = 0;
		string s;
		cin >> s;
		if(s[0] == '-') break;
		for(char ch : s) {
			if(ch == '{') cnt++;
			else {
				if(cnt <= 0) {
					ans++;
					cnt++;
				}
				else {
					cnt--;
				}
			}
		}
		ans += cnt / 2;
		cout << n++ << ". " << ans << '\n';
	}
	return 0;
}
