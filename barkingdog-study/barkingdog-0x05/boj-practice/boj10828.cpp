#include <iostream>
#include <string>
using namespace std;
const int MX = 10000;
int dat[MX+1];
int pos = 0;
void push(int x) {
	dat[pos++] = x;
}
int pop() {
	if(pos > 0) {
		--pos;
	}
	return dat[pos];
}
int size() {
	return pos;
}
int empty() {
	if(pos <= 0) return 1;
	return 0;
}
int top() {
	return dat[pos-1];
}
int main() {
	int n;
	cin >> n;
	while(n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			push(num);
		}
		if(cmd == "pop") {
			if(empty()) {
				cout << "-1" << '\n';
				continue;	
			}
			cout << pop() << '\n';
		}
		if(cmd == "size") {
			cout << size() << '\n';
		}
		if(cmd == "empty") {
			cout << empty() << '\n';
		}
		if(cmd == "top") {
			if(empty()) {
				cout << "-1" << '\n';
				continue;	
			}
			cout << top() << '\n';
		}	
	}
	return 0;
}
