#include <iostream>
using namespace std;
int cnt = 0;
int cnt2 = 0;
int cache[30][30];
int bino(int n, int r) {
	cnt++;
	if(r == 0 || n == r) return 1;
	return bino(n-1, r-1) + bino(n-1, r);	
}
int bino2(int n, int r) {
	cnt2++;
	if(r == 0 || n == r) return 1;
	if(cache[n][r] != -1) return cache[n][r];
	return cache[n][r] = bino2(n-1, r-1) + bino2(n-1, r);
}
int main() {
	for(int i = 0; i < 30; i++) 
		for(int j = 0; j < 30; j++)
			cache[i][j] = -1;
	int n;
	cin >> n;
	int x = bino(n, n/2);
	int y = bino2(n, n/2);
	cout << "bino(" << n << ", " << n/2 << ") : " << y << '\n';
	cout << "bino È£Ãâ È½¼ö´Â : " << cnt << '\n';
	cout << "bino2 È£Ãâ È½¼ö´Â : " << cnt2 << '\n';
	return 0;
}
