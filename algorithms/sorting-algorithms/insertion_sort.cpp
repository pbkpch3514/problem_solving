#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int>& a) {
	int N = a.size();
	for(int i = 0; i < N; i++) {
		int j = i;
		while(j > 0 &&  a[j-1] > a[j]) {
			swap(a[j-1], a[j]);
			j--;
		}
	}
}

int main() {
	vector<int> A = {1, 8, 10, 9, 4, 3, 2, 6, 7, 5};
	cout << "before sorted : <";
	for(int x : A) cout << x << ", ";
	cout << "\b\b>\n";
	
	insertionSort(A);
	
	cout << "after sorted : <";
	for(int x : A) cout << x << ", ";
	cout << "\b\b>\n";
	return 0;
}
