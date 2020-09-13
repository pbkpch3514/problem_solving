#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool check[10];
int a[10];
int n, m;
void pick(int idx, int n, int m) {
	if(idx == m) {
		for(int i = 0; i < m; i++) {
			cout << a[i] << ' ';
		}
		cout << '\n';
	}
	for(int i = 1; i <= n; i++) {
		if(check[i]) continue;
		check[i] = true;
		a[idx] = i;
		pick(idx+1, n, m);
		check[i] = false;
	}
}
int main() {
	IOS;
	cin >> n >> m;
	pick(0, n, m);
	return 0;
}
