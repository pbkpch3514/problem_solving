#include <iostream>
using namespace std;

int number = 9;
int heap[9]= {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main() {
	// 트리 구조를 MAX Heap으로 변경 
	for(int i = 1; i < number; i++) {
		int c = i; 
		do {
			int root = (c - 1) / 2;
			if(head[root] < head[c]) {
				int temp = head[root];
				head[root] = head[c];
				head[c] = temp;
			}
			c = root;
		} while(c != 0);
	}
	return 0;
}
