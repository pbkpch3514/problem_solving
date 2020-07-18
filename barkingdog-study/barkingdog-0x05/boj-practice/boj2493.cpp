#include <iostream>
#include <stack>
int ans[500001];
using namespace std;
int main() {
	int n, h = 0;
	stack<pair<int, int>> s;
	cin >> n;
	cin >> h;
	s.push(make_pair(1, h));
	for(int i=1; i<n; i++) {
		cin >> h;
		if(h > s.top().second) {
			while(!s.empty() && h > s.top().second) {
				s.pop();
			}
			
			if(s.empty()) {
				ans[i] = 0;
			}
			else {
				ans[i] = s.top().first;
			}
		}
		else {
			ans[i] = s.top().first;
		}
		s.push(make_pair(i+1, h));
	} 
	
	for(int i=0; i<n; i++)
		cout << ans[i] << ' ';
	return 0;
}
