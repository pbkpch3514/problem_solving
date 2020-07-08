#include <iostream>
#include <list>
using namespace std;
int main() {
	list<int> L = {1, 2};
	list<int>::iterator t = L.begin();
	L.push_front(10); // 10 1 2
	cout << *t << '\n';
	L.push_back(5); // 10 1 2 5
	L.insert(t, 6); // 10 6 1 2 5
	t++; // 2
	t = L.erase(t); // 10 6 1 5
	
	cout << *t << '\n'; // 5
	for(auto i : L) cout << i << ' '; 
	cout << '\n';
	for(auto it = L.begin(); it != L.end(); it++)
		cout << *it << ' ';
	return 0;
}
