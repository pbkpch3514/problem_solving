#include <iostream>
using namespace std;
void func1(int n) {
	if(n == 0) return;
	cout << n << '\n';
	func1(n-1);
}
void func2(int n) {
	if(n == 0) return 0;
	return n + func2(n-1);
}
int main() {
	return 0;
}
