//백준 1546번 새로운 점수 평균구하기
/*
#include<iostream>
#include<vector>
using namespace std;

class Cal {
public:
	double aver;
	int max;
	vector<double> newArr;
	vector<double> arr;
	Cal(int n) {
		this->aver = 0;
		this->max = 0;
	}

	void putOrigin(int n) {
		arr.push_back(n);
	}

	double Average() {
		double sum = 0;
		this->max=this->arr[0];
		for (int i = 0; i < arr.size(); i++) {
			if (max < arr[i]) max = arr[i];
		}
		for (int i = 0; i < arr.size(); i++) {
			newArr.push_back(arr[i] / max * 100);
		}
		for (int i = 0; i < newArr.size(); i++) {
			sum += newArr[i];
		}
		int size = newArr.size();
		return sum / size;
	}
};

int main() {
	int N, grade;
	cin >> N;
	Cal c(N);
	while (N--) {
		cin >> grade;
		c.putOrigin(grade);
	}
	cout << c.Average() << endl;
}
*/