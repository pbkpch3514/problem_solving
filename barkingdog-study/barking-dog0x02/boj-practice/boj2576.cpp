#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int min_odd = 100;
	for(int i=0; i<7; i++) {
		int num;
		cin >> num;
		if(num % 2 != 0) {
			sum += num;
			if(min_odd >= num) {
				min_odd = num;
			}
		}
	}
	if(sum == 0) {
		cout << -1 << '\n';
	}
	else {
		cout << sum << '\n';
		cout << min_odd << '\n';
	}	
	return 0;
}
