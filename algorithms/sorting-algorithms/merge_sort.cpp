#include <iostream>
#include <vector>
using namespace std;
vector<int> tmp(10);
void merge(vector<int>& A, int m, int mid, int n) {
	int i = m;
	int j = mid+1;
	int k = m;
	while(i <= mid && j <= n) {
		if(A[i] <= A[j]) {
			tmp[k] = A[i];
			i++;
		}
		else {
			tmp[k] = A[j];
			j++;
		}
		k++;
	}
	if(i > mid) {
		for(int t = j; t <= n; t++) {
			tmp[k] = A[t];
			k++;
		}
	}
	else {
			for(int t = i; t <= mid; t++) {
			tmp[k] = A[t];
			k++;
		}
	}
	for(int t = m; t <= n; t++) A[t] = tmp[t];
}
void mergeSort(vector<int>& A, int m, int n) {
	if(m < n) {
		int mid = (m + n) / 2;
		mergeSort(A, m, mid);
		mergeSort(A, mid+1, n);
		merge(A, m, mid, n);
	}
}
int main() {
	vector<int> A = {1, 8, 10, 9, 4, 3, 2, 6, 7, 5};
	cout << "before sorted : <";
	for(int x : A) cout << x << ", ";
	cout << "\b\b>\n";
	
	mergeSort(A, 0, 9);
	
	cout << "after sorted : <";
	for(int x : A) cout << x << ", ";
	cout << "\b\b>\n";
	return 0;
}
