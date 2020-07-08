#include <iostream>
#include <string>
using namespace std;
int freq[26];
int main() {
	
	int t;
	cin >> t;
	while(t--) {
		fill(freq, freq+26, 0);
		bool ok = true;
		string a, b;
		cin >> a >> b;
		for(char ch : a) 
			freq[ch - 'a']++;
		
		for(char ch : b) 
			freq[ch - 'a']--;
		
		for(int i = 0; i < 26; i++) {
			if(freq[i]) {
				ok = false;
				break;
			}
		}
		if(ok) cout << "Possible" << '\n';
		else cout << "Impossible" << '\n';
	}
	return 0;
}
