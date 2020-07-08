#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, k;
	vector<int> L;
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++) L.push_back(i);
	
	int idx = 0;
	cout << "<";
	while(!L.empty()) {
		idx = (idx + k - 1) % L.size();
		cout << L[idx];
		if(L.size() == 1) cout << ">";
		else cout << ", ";
		L.erase(L.begin()+idx); 
	}
	
	return 0;
}
