#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int dist[100002];
int n, k;
int main() {
	cin >> n >> k;
	fill(dist, dist+100001, -1);
	dist[n] = 0;
	queue<int> q;
	q.push(n);
	while(dist[k] == -1) {
		auto cur = q.front(); q.pop();
		for(int nxt : {cur-1, cur+1, 2*cur}) {
			if(nxt < 0 || nxt > 100000) continue;
			if(dist[nxt] >= 0) continue;
			dist[nxt] = dist[cur]+1;
			q.push(nxt);
		}
	}
	cout << dist[k] << '\n';
	return 0;
}
