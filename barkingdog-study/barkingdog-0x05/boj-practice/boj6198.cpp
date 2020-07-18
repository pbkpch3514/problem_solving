#include <iostream>
#include <stack>
using namespace std;
typedef long long ll;
int h[80001];
int main() {
	int n;
	stack<int> s;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> h[i];
	}
	
	ll ans = 0;
	for(int i = 0; i < n; i++) {
		while(!s.empty() && h[i] >= s.top()) {
			s.pop();
		}
		
		s.push(h[i]);
		ans += s.size() - 1;
	}
	cout << ans << '\n';
	return 0;
}
