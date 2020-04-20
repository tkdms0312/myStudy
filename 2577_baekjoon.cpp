//Baekjoon 2577
//Count the how many numbers 0 ~ 9 are in the result of the expression
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Cal {
public:
	string numStr;
	int numArr[10];
	Cal(string s) {
		this->numStr = s;
		for (int i = 0; i < 10; i++) this->numArr[i] = 0;
	}

	void count() {
		int cnt = 0;
		while(numStr[cnt]!=NULL){
			switch (numStr[cnt]-'0')
			{
			case 0:
				numArr[0]++;
				break;
			case 1:
				numArr[1]++;
				break;
			case 2:
				numArr[2]++;
				break;
			case 3:
				numArr[3]++;
				break;
			case 4:
				numArr[4]++;
				break;
			case 5:
				numArr[5]++;
				break;
			case 6:
				numArr[6]++;
				break;
			case 7:
				numArr[7]++;
				break;
			case 8:
				numArr[8]++;
				break;
			case 9:
				numArr[9]++;
				break;
			default:
				break;
			}
			cnt++;
		}
		for (int i = 0; i < 10; i++) cout << numArr[i] << endl;
	}

};

int main() {
	int a, b, c,res;
	cin >> a >> b >> c;
	res = a * b * c;
	string str = to_string(res);
	//String class doesn't have the methods of changing type to int or float
	//So static_cast<string>(res) cannot be used. -> Use to_string 
	Cal cal(str);
	cal.count();
}
