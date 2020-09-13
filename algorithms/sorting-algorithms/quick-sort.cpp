#include <iostream>
using namespace std;
int arr[1000001];
void quicksort(int begin, int end) {
	if(begin >= end) return;
	int pivot = arr[(begin+end)/2];
	int l = begin;
	int r = end;
	while(l <= r) {
		while(arr[l] < pivot) l++;
		while(arr[r] > pivot) r--;
		if(l <= r) {
			swap(arr[l], arr[r]);
			l++, r--;
		}
		
	}
	quicksort(begin, r);
	quicksort(l, end);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	quicksort(0, n-1);
	
	for(int i = 0; i < n; i++) cout << arr[i] << '\n';
	return 0;
}
