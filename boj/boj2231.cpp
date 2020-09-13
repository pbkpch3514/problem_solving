#include <iostream>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n, sum, tmp, i;
int main() {
	IOS;
	cin >> n;
	for(i = 1; i <= n; i++) {
		sum = 0;
		tmp = i;
		while(tmp) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if((n - sum) == i) {
			break;
		}
	}
	if(i == n) cout << 0 << '\n';
	else cout << i << '\n';
	return 0;
}
