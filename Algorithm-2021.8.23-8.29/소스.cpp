

#include <iostream>
using namespace std;


int reverse(int n) {
	int sum = 0;
	sum += (n%10)*100; //�����ڸ�-�����ڸ���
	sum += n%100-n%10;//�����ڸ�
	sum += n/100;//�����ڸ�

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



