#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int binsearch(vector<int>& dat, int target, int begin, int end) {
	
	if(begin > end) return -1;
	
	int mid = (begin + end) / 2;
	
	if(dat[mid] == target) return mid;
	else if(dat[mid] > target) return binsearch(dat, target, begin, mid-1);
	else if(dat[mid] < target) return binsearch(dat, target, mid+1, end);
}
int main() {
	vector<int> a = {1, 102, 50, 23, 29, 43, 48, 90, 21, 4};
	sort(a.begin(), a.end());
	int n = a.size();
	int t;
	cin >> t;
	cout << binsearch(a, t, 0, n-1) << '\n';
	return 0;
}
