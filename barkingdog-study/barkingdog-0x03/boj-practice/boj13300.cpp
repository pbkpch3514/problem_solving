#include <iostream>
using namespace std;
int room[6][2];
int main() {
	int n, k;
	int cnt = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		int s, g;
		cin >> s >> g;
		room[g-1][s]++;
	}
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 2; j++) {
			if(!room[i][j]) continue;
			else if(room[i][j] < k) {
				cnt++;
			}
			else if(room[i][j] % k == 0) {
				cnt += room[i][j] / k;
			}
			else {
				cnt += room[i][j] / k + 1;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
