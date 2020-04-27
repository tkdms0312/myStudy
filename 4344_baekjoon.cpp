//4344
//Find that case is over average or no
#include<iostream>
using namespace std;

class Average {
public:
	int aver;
	int* score;
	int cnt;
	int size;
	Average(int n) {
		this->size = n;
		this->aver = this->cnt = 0;
		this->score = new int[n];
	}

	void putScore(int n) {
		score[cnt] = n;
		cnt++;
	}

	double Assess() {
		int sum = 0;
		double studentNum = 0; //if any one of the number which is
		//included in division is double type, then the result will be double type
		for(int i=0; i<size;i++){
			sum += score[i];
		}
		aver = sum / size;
		for (int i = 0; i < size; i++) {
			if (score[i] > aver) studentNum += 1;
		}
		return studentNum / size * 100;
	}
};

int main() {
	int N, num, gra;
	cin >> N;
	while (N--) {
		cin >> num;
		Average a(num);
		while (num--) {
			cin >> gra;
			a.putScore(gra);
		}
		cout << fixed;
		cout.precision(3);
		cout << a.Assess() << "%" << endl;
	}
}