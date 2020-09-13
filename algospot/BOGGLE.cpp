#include <iostream>
#include <string>
using namespace std;
int tc, n;
string board[5];
string words[10];
int cache[10][5][5];
int dx[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
int dy[8] = {-1, 0, 1, -1, 0, 1, -1, 1};
int hasWord(int y, int x, int idx, string& word) {
	if(y < 0 || y >= 5 || x < 0 || x >= 5) return 0;
	if(board[y][x] != word[0]) return 0;
	
	if(word.size() == 1) return 1;
	
	int& ret = cache[idx][y][x];
	if(ret != -1) return ret;
	for(int i = 0; i < 8; i++) {
		ret = hasWord(y+dy[i], x+dx[i], idx+1, word.substr(1));
		if(ret) return ret;
	}
	return ret;
}
int main() {
	cin >> tc;
	while(tc--) {
		for(int i = 0; i < 5; i++) cin >> board[i];
		cin >> n;
		
		for(int i = 0; i < n; i++) 
			cin >> words[i];	
		
		for(int i = 0; i < n; i++) {
			for(int i = 0; i < 5; i++) fill(cache[i], cache[i]+5, -1);
			bool ok;
			for(int y = 0; y < 5; y++) {
				for(int x = 0;  x < 5; x++) {
					if(hasWord(y, x, 0, words[i]))	{
						ok = true;
						break;	
					}
				}
				if(ok) break;
			}
			if(ok) cout << words[i] << " " << "YES" << '\n';
			else cout << words[i] << " " << "NO" << '\n';
		}
	
	}
	return 0;
}
