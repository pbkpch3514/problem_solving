#include <iostream>
using namespace std;
int a[201];
int main() {
	int n, v;
	cin >> n;
	for(int i=0; i<n; i++) {
		int m;
		cin >> m;
		a[m+100]++;
	}
	cin >> v;
	cout << a[v+100] << '\n';
	return 0;
}
