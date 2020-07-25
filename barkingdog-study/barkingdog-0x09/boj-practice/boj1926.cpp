#include <iostream>
#include <queue>
#include <algorithm>
#define X first
#define Y second
using namespace std;
int board[501][501];
bool vis[501][501];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
		
	int cnt, ans = 0;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(board[i][j] == 0 || vis[i][j]) continue;
			cnt++;
			queue<pair<int, int> > Q;
			vis[i][j] = 1;
			Q.push({i, j});
			int tmp = 0;
			while(!Q.empty()) {
				tmp++;
				pair<int, int> cur = Q.front(); Q.pop();
				for(int i = 0; i < 4; i++) {
					int nx = cur.X + dx[i];
					int ny = cur.Y + dy[i];
					if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if(vis[nx][ny] || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					Q.push({nx, ny});
				}
			}
			ans = max(ans, tmp);
		}
	}
	cout << cnt << '\n' << ans << '\n';
	return 0;
}
