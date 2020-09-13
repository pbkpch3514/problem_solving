#include <iostream>
#include <vector>
using namespace std;
int sum(int n, vector<int>& dat) {
	if(n <= 0) return 0;
	return sum(n-1, dat) + dat[n-1];
}
int main() {
	int n;
	cin >> n;
	vector<int> dat(n);	
	for(int i = 0; i < n; i++) cin >> dat[i];
	cout << sum(n, dat) << '\n';
	return 0;
}
