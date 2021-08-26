

#include <iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int sum = 1;

	if (n == 0)
		cout << "1";

	else {
		for (int i = 1; i <= n; i++) {

			sum = sum * i;


		}

		cout << sum;
	}

	return 0;
}