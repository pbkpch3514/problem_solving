#include <iostream>
#include <string>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

int empty() {
	if(tail == head) return 1;
	return 0;	
}

int size() {
	return tail - head;
}

void push_front(int x) {
	dat[--head] = x;
}

void push_back(int x) {
	dat[tail++] = x;
}

int pop_front() {
	return dat[head++];
}

int pop_back() {
	return dat[--tail];
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail-1];
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
		if (cmd == "push_front") {
			int num;
			cin >> num;
			push_front(num);
		}
		if (cmd == "push_back") {
			int num;
			cin >> num;
			push_back(num);
		}
		if(cmd == "pop_front") {
			if(empty()) {
				cout << "-1" << '\n';
				continue;	
			}
			cout << pop_front() << '\n';
		}
		if(cmd == "pop_back") {
			if(empty()) {
				cout << "-1" << '\n';
				continue;	
			}
			cout << pop_back() << '\n';
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
