#include <iostream>
using namespace std;
int Pow(int x, int n) {
	if(n == 0) return 1;
	return x * Pow(x, n-1);
}
int main() {
	int x, n;
	cin >> x >> n;
	cout << x << "^" << n << " : " << Pow(x, n) << '\n';
	return 0;
}
