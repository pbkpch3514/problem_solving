#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	int y = 0;
	int m = 0;
	for(int i=0; i<n; i++) {
		int t;
		cin >> t;
		y += 10 * ((t / 30) + 1);
		m += 15 * ((t / 60) + 1);
	}

	if(y < m) cout << "Y " << y << '\n';
	else if(y > m) cout << "M " << m << '\n';
	else cout << "Y M " << y << '\n';
	return 0;
}
