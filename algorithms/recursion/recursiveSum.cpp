#include <iostream>
using namespace std;
int rSum(int n) {
	if(n == 0) return 0;
	return n + rSum(n-1);
}
int main() {
	int n;
	cin >> n;
	cout << "sum : " << rSum(n) << '\n';
	return 0;
}
