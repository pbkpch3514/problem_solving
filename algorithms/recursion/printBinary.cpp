#include <iostream>
using namespace std;
void printBinary(int n) {
	if(n < 2) cout << n;
	else {
		printBinary(n / 2);
		cout << n % 2;
	}
}
int main() {
	int n;
	cin >> n;
	printBinary(n);
	return 0;
}
