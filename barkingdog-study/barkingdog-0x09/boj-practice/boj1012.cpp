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
			board[x][y] = 1;
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cout << board[i][j] << ' ';
			}
			cout << '\n';
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(board[i][j] == 0 || vis[i][j]) continue;
				cout << "(i : " << i << ", j : " << j << ")" << '\n';
				vis[i][j] = true;
				queue<pair<int, int> > Q;
				
				Q.push({i, j});
				while(!Q.empty()) {
					auto cur = Q.front(); Q.pop();
					for(int i = 0; i < 4; i++) {
						int nx = cur.X + dx[i];
						int ny= cur.Y + dy[i];
						if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if(vis[i][j] || board[i][j] != 1) continue;
						vis[i][j] = 1;
						Q.push({i, j});
					}
				}
			}
		}
	}
	return 0;
}
