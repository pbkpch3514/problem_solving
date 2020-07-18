#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> s;
	int k;
	int sum = 0;
	cin >> k;
	while(k--) {
		int n;
		cin >> n;
		if(n == 0) s.pop_back();
		else s.push_back(n);
	}
	for(int a : s)
		sum += a;
	cout << sum << '\n';
	return 0;
}
