#include <iostream>
#include <string>
using namespace std;
int arr[64][64];
void compress(int n, int y, int x) {
	int half = n / 2;
	if(n == 1) {
		cout << arr[y][x];
		return;
	}
	bool isZero = true, isOne = true;
	for(int i = y; i < y + n; i++) {
		for(int j = x; j < x + n; j++) {
			if(arr[i][j]) isZero = false;
			else isOne = false;
		}
	}
	if(isZero) cout << 0;
	else if(isOne) cout << 1;
	else {
		cout << "(";
		compress(half, y, x);
		compress(half, y, x + half);
		compress(half, y + half, x);
		compress(half, y + half, x + half);
		cout << ")";
	}
	return;
}
int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for(int j = 0; j < N; j++) arr[i][j] = s[j] - '0';
	}
	
	compress(N, 0, 0);
	cout << '\n';
	return 0;
}
