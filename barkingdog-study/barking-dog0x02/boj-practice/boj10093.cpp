#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	ll a, b, count;
	cin >> a >> b;
	if(a > b) {
		swap(a, b);
	}
	if(a == b) count = 0;
	else count = b - a - 1;
	cout << count << '\n';
	for(ll i=a+1; i<b; i++) {
		cout << i << ' ';
	}
	cout << '\n';
	return 0;
}
