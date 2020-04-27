//2839
//Secer - sugar deliver

#include<iostream>
using namespace std;

int main() {
	int N,result,mod;
	cin >> N;
	int m = N / 5;
	while (m >= 0) {
		result = 0;
		mod = 0;
		if (m > 0) {
			mod = N - (5 * m); //remained weight after using 5kg sugar
			result = m;
		}
		else mod = N;
		result += mod / 3; // add the number of used 3kg sugar
		mod = mod % 3; //remained weight after using 3kg sugar
		if (mod == 0) cout << result << endl;
		else m--; //mod is not 0 so do it again after reducing
		//a number of used 5kg sugar
	}
	if (m != 0) cout << -1 << endl;
}