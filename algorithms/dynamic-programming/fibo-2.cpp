#include <iostream>
#include <cassert>
using namespace std;
#define MAX 100
typedef long long ll;
ll cache[MAX+1];
ll fibo(int n) {
	assert(n >= 0);
	if(0 <= n && n <= 1) return 1;
	if(cache[n] != -1) return cache[n];
	return cache[n] = fibo(n-1) + fibo(n-2);
}
int main() {
	fill(cache, cache+101, -1);
	int n;
	cin >> n;
	cout << fibo(n) << '\n';
	return 0;
}
