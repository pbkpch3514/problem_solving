#include <iostream>
using namespace std;
int main() {
	int s;
	cin >> s;
	if(90 <= s && s <= 100) cout << "A" << '\n';
	else if(80 <= s && s < 90) cout << "B" << '\n';
	else if(70 <= s && s < 80) cout << "C" << '\n';
	else if(60 <= s && s < 70) cout << "D" << '\n';
	else cout << "F" << '\n';
	return 0;
}
