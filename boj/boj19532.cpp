#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b, c, d, e, f;
	int x, y;
	cin >> a >> b >> c >> d >> e >> f;
	x = (e*c - b*f) / (a*e - b*d);
	y = (a*f - c*d) / (a*e - b*d);
	cout << x << ' ' << y << '\n';
}
