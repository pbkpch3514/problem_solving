#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	int arr[10] = {0,};
	int result;
	cin >> a;
	cin >> b;
	cin >> c;
	result = a * b * c;
	while(result) {
		int n = result % 10;
		arr[n] = arr[n] + 1;
		result /= 10;
	}
	for(int i=0; i<10; i++) {
		cout << arr[i] << '\n';
	}
	return 0;
}
