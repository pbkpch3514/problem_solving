#include <iostream>
#include <queue>
using namespace std;
int main() {
	int n;
	queue<int> q;
	cin >> n;
	for(int i=1; i<=n; i++) q.push(i);
	
	int ans = 0;
	while(q.size() != 1) {
		q.pop();
		int f = q.front();
		q.pop();
		q.push(f);
	}
	cout << q.front() << '\n';
	return 0;
}
