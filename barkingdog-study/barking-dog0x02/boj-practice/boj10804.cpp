#include <iostream>
#include <algorithm>
using namespace std;
int a[21];
int main() {
	for(int i=1; i<21; i++) {
		a[i] = i;
	}
	for(int i=0; i<10; i++) {
		int a_i, b_i;
		cin >> a_i >> b_i;
		for(int j=b_i; j>a_i; j--) {
			for(int k=j-1; k>=a_i; k--) {
				swap(a[j], a[k]);
			}
		}	
	}
	for(int i=1; i<21; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}
