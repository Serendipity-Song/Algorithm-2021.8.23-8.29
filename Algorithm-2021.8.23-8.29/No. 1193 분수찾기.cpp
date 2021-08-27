
#include <iostream>
using namespace std;



int hap(int k) {


	int sum = 0;
	int x = 0;
	for (x = 0; sum < k; x++) {

		sum = sum + x;
	}

	return sum;
}

int xx(int k) {


	int sum = 0;
	int x = 0;
	for (x = 0; sum < k; x++) {

		sum = sum + x;
	}

	return x;
}

int main() {

	int a;
	cin >> a;

	/*cout << hap(a) <<" "<< xx(a);*/
	cout << a - hap(a) + xx(a) - 1 << "/" << xx(a) - (a - hap(a) + xx(a) - 1);
}
