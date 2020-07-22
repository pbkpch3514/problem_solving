#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main() {
	int tc;
	cin >> tc;
	while(tc--) { 
		string cmd;
		cin >> cmd;
		
		int n;
		cin >> n;
		
		string arr;
		cin >> arr;
		arr = arr.substr(1, arr.size()-2);
		arr += ",";
		
		deque<int> dq;
		
		string tmp;
		for(auto ch : arr) {
			if('0' <= ch && ch <= '9') {
				tmp += ch;
			}
			
			if(ch == ',' && !tmp.empty()) {
				dq.push_back(stoi(tmp));
				tmp.clear();
			}
		}
		
		bool reverse = false;
		bool error = false;
		
		for(char ch : cmd) {
			if(ch == 'R') reverse = !reverse;
			
			if(ch == 'D') {
				if(dq.empty()) {
					error = true;
					break;
				}
				
				if(reverse == true) {
					dq.pop_back();
				}
				else {
					dq.pop_front();	
				}
			}
		}
		
		if(error) {
			cout << "error" << '\n';
			continue;
		}
		
		cout << "[";
		if(reverse) {
			while(!dq.empty()) {
				cout << dq.back();
				dq.pop_back();
				if(!dq.empty()) cout << ",";
			}
		}
		else {
			while(!dq.empty()) {
				cout << dq.front();
				dq.pop_front();
				if(!dq.empty()) cout << ",";
			}
		}
		cout << "]" << '\n';
	}
	return 0;
}
