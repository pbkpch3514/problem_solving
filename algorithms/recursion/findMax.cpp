#include <iostream>
#include <vector>
using namespace std;
int findMax(vector<int>& dat, int begin, int end) {
	if(begin == end) return dat[begin];
	int mid = (begin + end) / 2;
	int max1 = findMax(dat, begin, mid);
	int max2 = findMax(dat, mid+1, end);
	return max(max1, max2);
}
int main() {
	vector<int> dat = {1, 100, -10000, 1010, 500, 1557};
	int n = dat.size();
	int m = findMax(dat, 0, n-1);
	cout << "^" << m << "^" << '\n';
	return 0;
}
