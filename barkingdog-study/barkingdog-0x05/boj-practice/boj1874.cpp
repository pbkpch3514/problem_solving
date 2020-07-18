#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
	int n;
	int m = 0;
	stack<int> s;
	vector<char> v;
	
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		if(x > m) {
			while(x > m) {
				s.push(++m);
				v.push_back('+');
			}
			s.pop();
			v.push_back('-');
		}
		else {
			bool found = false;
			if(!s.empty()) {
				int t = s.top();
				s.pop();
				v.push_back('-');
				if(x == t) found = true;
			}
			if(!found) {
				cout << "NO" << '\n';
				return 0;
			} 
			
		}
	}
	for(auto a : v) cout << a << '\n';
	return 0;
}
