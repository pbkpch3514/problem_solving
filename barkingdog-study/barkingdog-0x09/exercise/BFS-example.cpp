#include <iostream>
#include <queue>
#define X first
#define Y second
int board[7][10] =
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

bool vis[10][7];
int n = 7, m = 10;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
using namespace std;
int main() {
	queue<pair<int, int> > Q;
	Q.push({0, 0});
	vis[0][0] = 1;
	while(!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		cout << "(" << cur.X << ", " << cur.Y << ") -> ";
		for(int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if(vis[nx][ny] || board[nx][ny] != 1) continue;
			vis[nx][ny] = 1;
			Q.push({nx, ny});
		}
	}
	return 0;
}
