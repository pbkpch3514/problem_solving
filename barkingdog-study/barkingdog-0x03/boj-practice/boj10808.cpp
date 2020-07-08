#include <iostream>
#include <cstring>
using namespace std;
int cnt[26];
int main() {
	string s;
	cin >> s;
	for(char ch : s) 
		cnt[ch - 'a']++;
	
	for(int i=0; i<26; i++)
		cout << cnt[i] << ' ';
	cout << '\n';
	return 0;
}
