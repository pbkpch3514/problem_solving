#include <iostream>
#include <string>
using namespace std;

const int MX = 2000001;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
	dat[tail++] = x;
}

int pop() {
	return dat[head++];
}

int empty() {
	if(tail == head) return 1;
	return 0;	
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail-1];
}

int size() {
	return tail - head;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
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
		if(cmd == "front") {
			if(empty()) {
				cout << "-1" << '\n';
				continue;	
			}
			cout << front() << '\n';
		}
		if(cmd == "back") {
			if(empty()) {
				cout << "-1" << '\n';
				continue;	
			}
			cout << back() << '\n';
		}	
	}
	return 0;
}
