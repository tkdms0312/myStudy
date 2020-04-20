//Baekjoon 3052
//How many different numbers in the remain
#include<iostream>
using namespace std;

class Count {
public:
	int remain[10];
	int remCnt;
	Count() {
		this->remCnt = 0;
		for (int i = 0; i < 10; i++) {
			this->remain[i] = 42;
		}
	}

	void putRemain(int n) {
		remain[remCnt] = n % 42;
		remCnt++;
	}

	void print() {
		int cnt = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = i+1; j <10; j++) {
				if (remain[i] == remain[j]) {
					remain[j] = 42;
				}
			}
			if (remain[i] != 42) cnt++;
		}
		cout << cnt << endl;
	}
};

int main() {
	int num;
	int cnt = 10;
	Count c;
	while (cnt--) {
		cin >> num;
		c.putRemain(num);
	}
	c.print();
}
