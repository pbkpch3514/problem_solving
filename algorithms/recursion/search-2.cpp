#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& dat, int begin, int end, int target) {
	if(begin > end) return -1;
	if(target == dat[end]) return end;
	return search(dat, begin, end-1, target);
}
int main() {
	vector<int> dat = {1, 100, 25, 28 -21, 19, 26, 13, 9, 2, 5};
	int n = dat.size();
	int t;
	cin >> t;
	int idx = search(dat, 0, n-1, t);
	cout << idx << '\n';
	return 0;
}
