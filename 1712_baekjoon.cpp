//1712
//break-even point
#include<iostream>
#include<math.h>
using namespace std;


class BreakEven {
private:
	int staticCost, variableCost, price;
public:
	BreakEven(long int a, long int b, long int c) {
		this->staticCost = a;
		this->variableCost = b;
		this->price = c;
	}

	int Calculate() {
		if (variableCost < price)
			return (staticCost / (price - variableCost)) + 1;
		//is origined from 
		//staticCost + (variableCost * cnt) < price * cnt
		else return -1;
	}
};

int main() {
	long int a, b, c;
	cin >> a >> b >> c;
	//BreakEven even(a,b,c);
	//cout<<even.Calculate()<<endl;
	if (b < c) cout << (a / (c - b)) + 1 << endl;
	else cout << -1 << endl;

}
