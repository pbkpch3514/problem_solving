#include <iostream>
#include <vector>
using namespace std;
int main() {
	for(int i=0; i<3; i++) {
		vector<int> a(4);
		int cnt = 0;
		for(int i=0; i<4; i++) {
			cin >> a[i];
			if(a[i] == 0) cnt++;
		}
		if(cnt == 0) {
			cout << "E" << '\n';
		}
		if(cnt == 1) {
			cout << "A" << '\n';
		}
		if(cnt == 2) {
			cout << "B" << '\n';
		}
		if(cnt == 3) {
			cout << "C" << '\n';
		}
		if(cnt == 4) {
			cout << "D" << '\n';
		}
	}
	return 0;
}
