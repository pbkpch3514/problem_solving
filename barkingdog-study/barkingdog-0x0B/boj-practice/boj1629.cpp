#include <iostream>
using namespace std;
typedef long long ll;
ll a, b, c;
ll f(ll a, ll b, ll c) {
	if(b == 1) return a % c;
	ll val = f(a, b/2, c);
	val = val * val % c;
	if(b % 2 == 0) return val;
	return val * a % c;
}
int main() {
	cin >> a >> b >> c;
	cout << f(a, b, c) << '\n';
	return 0;
}
