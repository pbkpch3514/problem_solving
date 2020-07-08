#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int afreq[26];
int bfreq[26];
int main() {
	string a, b;
	int cnt = 0;
	cin >> a;
	cin >> b;
	for(char ch : a)
		afreq[ch - 'a']++;
	
	for(char ch : b)
		bfreq[ch - 'a']++;
	
	for(int i = 0; i < 26; i++) {
		if(afreq[i] != bfreq[i])
			cnt += abs(afreq[i] - bfreq[i]);
	}
	cout << cnt << '\n';
	return 0;
}
