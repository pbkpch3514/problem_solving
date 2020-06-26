#include <iostream>
using namespace std;
int main() {
	int idx = 0;
	int max_val = 0;
	cin >> max_val;
	for(int i = 1; i < 9; i++) {
		int val;
		cin >> val;
		if(val >= max_val) {
			max_val = val; 
			idx = i;
		}
	}
	cout << max_val << '\n';
	cout << (idx+1) << '\n';
	return 0;
}
