#include <iostream>
using namespace std;
typedef long long ll;
ll cache[101];
ll fact(int n) {
	if(n == 0 || n == 1) return 1;
	if(n == 2) return 2;
	if(cache[n] != -1) return cache[n];
	return cache[n] = n * fact(n-1);
}
int main() {
	int n;
	cin >> n;
	fill(cache, cache+101, -1);
	cout << fact(n) << '\n';
	return 0;
}
