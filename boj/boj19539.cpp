#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	int sum = 0;
	int evens = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum += x;
		evens += x / 2;
	}
	if((sum % 3 == 0) && (evens >= sum / 3)) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}
