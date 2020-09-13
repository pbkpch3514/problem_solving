#include <iostream>
using namespace std;
int tc, n;
int cache[100][100];
int board[100][100];
int jump(int y, int x) {
	if(y >= n || x >= n) return 0;
	if(y == n-1 && x == n-1) return 1;
	
	int& ret = cache[y][x];
	if(ret != -1) return ret;
	
	int jumpSize = board[y][x];
	return ret = jump(y + jumpSize, x) || jump(y, x + jumpSize);
}
int main() {
	cin >> tc;
	while(tc--) {
		cin >> n;
		for(int i = 0; i < n; i++) fill(board[i], board[i]+n, 0);
		for(int i = 0; i < n; i++) fill(cache[i], cache[i]+n, -1);
		
		for(int i = 0; i < n; i++) 
			for(int j = 0; j < n; j++)
				cin >> board[i][j];
		
		bool ok = jump(0, 0);
		if(ok) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}
