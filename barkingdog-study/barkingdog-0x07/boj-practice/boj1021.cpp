#include <iostream>
#include <deque>
using namespace std;
int n, m, num, ans;
int main() {
	deque<int> dq;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) dq.push_back(i);
	
	for(int i = 0; i < m; i++) {
		cin >> num;
		if(dq.front() == num) dq.pop_front();
		else {
			int idx = 0;
			for(auto x : dq) {
				if(x == num) break;
				idx++;
			}
			if(idx > (dq.size() / 2)) {
				while(dq.front() != num) {
					int tmp = dq.back();
					dq.pop_back();
					dq.push_front(tmp);
					ans++;
				}
				dq.pop_front();
			}
			
			else {
				while(dq.front() != num) {
					int tmp = dq.front();
					dq.pop_front();
					dq.push_back(tmp);
					ans++;
				}
				dq.pop_front();
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
