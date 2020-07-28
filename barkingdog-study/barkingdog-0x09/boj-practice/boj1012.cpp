#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int board[52][52];
bool vis[52][52];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int tc, m, n, k;
int main() {
	cin >> tc;
	while(tc--) {
		cin >> m >> n >> k;
		for(int i = 0; i < n; i++) fill(board[i], board[i]+m, 0);
		for(int i = 0; i < n; i++) fill(vis[i], vis[i]+m, 0);
		
		
		
		for(int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cout << board[i][j] << ' ';
			}
			cout << '\n';
		}
		
		cout << '\n';
		
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				queue<pair<int, int> > q;
				if(board[i][j] != 1 || vis[i][j]) continue;
				cnt++;
				cout << "i : " << i << " j : " << j << '\n';
				vis[i][j] = 1;
				q.push({i, j});
				while(!q.empty()) {
					auto cur = q.front(); q.pop();
					for(int i = 0; i < 4; i++) {
						int nx = cur.X + dx[i];
						int ny = cur.Y + dy[i];
						if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if(vis[i][j] || board[i][j] != 1) continue;
						vis[nx][ny] = 1;
						q.push({nx, ny});
					}
				}
			}
		}
		cout << cnt << '\n';	
	}
	
	return 0;
}
