#include <iostream>
using namespace std;
int n, m, t, a, b;
bool areFriends[10][10];
bool taken[10];
int countPairings(bool taken[10]) {
	int firstFree = -1;
	for(int i=0; i<n; i++) {
		if(!taken[i]) {
			firstFree = i;
			break;
		}
	}
	if(firstFree == -1) return 1;
	int ret = 0;
	for(int pairWith=firstFree+1; pairWith<n; pairWith++) {
		if(!taken[pairWith] && areFriends[firstFree][pairWith]) {
			taken[firstFree] = taken[pairWith] = true;
			ret += countPairings(taken);
			taken[firstFree] = taken[pairWith] = false;
		}
	}
	return ret;
}
int main() {
	cin >> t;
	while(t--) {
		for(int i=0; i<10; i++) {
			for(int j=0; j<10; j++) areFriends[i][j] = false;
		}
		cin >> n >> m;
		for(int i = 0; i < m; i++) {
			cin >> a >> b;
			areFriends[a][b] = areFriends[b][a] = true;	
		}
		int cnt = countPairings(taken);
		cout << cnt << '\n';
	}
	return 0;
}
