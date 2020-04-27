//Baekjoon 8958
//Record the score by counting consecutive 'O'
//Key point : string can be used as a type of array directly
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Score {
public:
	string Case;
	vector<char>arr;
	int sco;
	int tmp;
	Score(string str) {
		this->sco = this->tmp = 0;
		this->Case = str;
	}

	void assess() {
		int init;
		for (int i = 0; i < Case.size(); i++) {
			arr.push_back(Case[i]);
		}
		//String can be use directly as array
		for (int i = 0; i < arr.size(); i++) {
			switch (arr[i]) {
			case'O':
				tmp += 1;
				sco += tmp;
				break;
			case'X':
				tmp = 0;
				break;
			}
		}
		cout << sco << endl;
	}
};

int main() {
	int n;
	string str;
	cin >> n;
	while (n--) {
		cin >> str;
		Score s(str);
		s.assess();
	}

}