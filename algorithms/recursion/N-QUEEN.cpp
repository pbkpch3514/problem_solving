#include <iostream>
#include <cmath>
using namespace std;
const int N = 8;
int cols[N+1];
bool promising(int level) {
	for(int i = 1; i < level; i++) {
		if(cols[i] == cols[level]) return false;
		else if(abs(level - i) == abs(cols[level] - cols[i])) return false;
	}
	return true;
}
bool queens(int level) {
	if(!promising(level)) {
		return false;
	}
	else if(level == N) {
		for(int i = 1; i <= N; i++) {
			cout << "("<< i << ", "<< cols[i] << ")\n";
		}
		return true;
	}
	for(int i = 1; i <= N; i++) {
		cols[level+1] = i;
		if(queens(level+1)) return true;
	}
	return false;
}
int main() {
	queens(0);
	return 0;
}
