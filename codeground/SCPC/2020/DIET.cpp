#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int t, n, k, test_case;
int a[200001];
int b[200001];
int v[200001];
int main() {
	cin >> t;
	for(test_case = 0; test_case < t; test_case++) {
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		
		sort(a, a+n);
		sort(b, b+n);
		
		for(int i = 0; i < k; i++) {
			v[i] = a[i] + b[k-i-1];
		}	
		
		cout << "Case #" << test_case+1 << '\n';
		cout << *max_element(v, v+k) << '\n'; 
	}
	return 0;
}
