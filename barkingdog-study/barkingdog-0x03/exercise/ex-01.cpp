#include <iostream>
using namespace std;
int func2(int arr[], int len) {
	int occur[101] = {};
	for(int i=0; i<len; i++) {
		if(occur[100 - arr[i]] == 1)
			return 1;
		occur[arr[i]] = 1;
	} 
	return 0;
}
int main() {
	int arr1[] = {1, 52, 48};
	int arr2[] = {50, 42};
	int arr3[] = {4, 13, 63, 87};
	cout << "test1 (expected : 1) : " << func2(arr1, 3) << '\n';
	cout << "test2 (expected : 0) : " << func2(arr2, 2) << '\n';
	cout << "test3 (expected : 1) : " << func2(arr3, 4) << '\n';
	return 0;
}
