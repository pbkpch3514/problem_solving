#include <iostream>
#include <algorithm>
using namespace std;
int a[5];
int main() {
	int sum = 0;
	for(int i=0; i<5; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+5);
	cout << sum/5 << '\n';
	cout << a[2] << '\n';
	return 0;
}
