

#include <iostream>
using namespace std;
#include <cmath>


int main(){

	int num1;
	int num2;
	int snum1 = 0;
	int snum2=0;

	cin >> num1 >> num2;


		for (int i = 0; i < 3; i++) {

		snum1[i] += num1 % 10;

		}

		for (int i = 0; i < 3; i++) {

		snum2 += num2 % 10;

		}


		if (snum1 > snum2)
			cout << snum1;
		else cout << snum2;

}
