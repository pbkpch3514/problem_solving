#include <iostream>
#include <stack>
#include <string>
using namespace std;
double arr[26];
int n;
double a, b;
int main() {
	cout << fixed;
	cout.precision(2);
	stack<double> s;
	string exp;
	cin >> n;
	cin >> exp;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for(char ch : exp) {
		switch(ch) {
			case '+':
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				s.push(a+b);
				break;
			case '-':
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				s.push(b-a);
				break;
			case '*':
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				s.push(a*b);
				break;
			case '/':
				a = s.top();
				s.pop();
			 	b = s.top();
				s.pop();
				s.push(b/a);
				break;
			default:
				s.push(arr[ch - 'A']);
		}
	}
	
	cout << s.top() << '\n';
	return 0;
}
