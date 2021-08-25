

#include <iostream>
using namespace std;


int reverse(int n) {
	int sum = 0;
	sum += (n%10)*100; //일의자리-백의자리로
	sum += n%100-n%10;//십의자리
	sum += n/100;//백의자리

	return sum;
}



int main() {

	int a, b;
	cin >> a >> b;

	a = reverse(a);
	b = reverse(b);

	if (a > b)
		cout << a;
	else
		cout << b;
}



