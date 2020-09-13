#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int dist[302][302];
int tc, I, s1, s2, d1, d2;
const int dx[8] = {2, 2, -2, -2, 1, -1, 1, -1};
const int dy[8] = {1, -1, 1, -1, 2, 2, -2, -2};
int main() {
	cin >> tc;
	while(tc--) {
		cin >> I;
		cin >> s1 >> s2;
		cin >> d1 >> d2;
		
		for(int i = 0; i < I; i++) fill(dist[i], dist[i]+I, 0);
		queue<pair<int, int> > q;
		q.push({s1, s2});
		while(!q.empty()) {
			auto cur = q.front(); q.pop();
			for(int i = 0; i < 8; i++) {
				int nx = cur.X + dx[i];
				int ny = cur.Y + dy[i];
				if(nx < 0 || nx >= I || ny < 0 || ny >= I) continue;
				if(dist[i] > 0) continue;
				cout << "nx : " << nx << " ny : " << ny << '\n';
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
				q.push({nx, ny});
			}
		}
		cout << dist[d1][d2] << '\n';
	}
	return 0;
}
