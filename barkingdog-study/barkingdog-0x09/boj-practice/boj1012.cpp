#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int board[50][50];
int vis[50][50];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int tc, m, n, k, x, y;
void bfs(int i, int j) {
	queue<pair<int, int> > q;
	q.push({i, j});
	vis[i][j] = 1;
	while(!q.empty()) {
		pair<int, int> cur = q.front(); q.pop();
		for(int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(board[nx][ny] == 0 || vis[nx][ny] == 1) continue;
			vis[nx][ny] = 1;
			q.push({nx, ny});
	    }
	}	
}
int main() {
	cin >> tc;
	while(tc--) {
		cin >> m >> n >> k;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				board[i][j] = 0;
				vis[i][j] = 0;
			}
		}
							
		for(int i = 0; i < k; i++) {
			cin >> x >> y;
			board[y][x] = 1;
		}
		
		int cnt = 0;
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(board[i][j] == 1 && vis[i][j] == 0) {
					bfs(i, j);
					cnt++;
				}	
			}
		}
		cout << cnt << '\n';	
	}
	
	return 0;
}
