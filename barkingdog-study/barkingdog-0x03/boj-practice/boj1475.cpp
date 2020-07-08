#include <iostream>
#include <algorithm>
using namespace std;
int a[10];
int main() {
	int n;
	int cnt = 0;
	cin >> n;
	while(true) {
		a[n%10]++;
		if(n/10 == 0) break;
		n /= 10;
	}
	int set = 0;
	for(int i = 0; i < 10; i++) {
		if(i != 9 && i != 6) set = max(set, a[i]);
	}
		
	cout << max(set, (a[6] + a[9] + 1) / 2);
	return 0;
}
