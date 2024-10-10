#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, opt;
	char cont;
	do {

		cout << "\nSelect an option from [1-8] according to the menu:" << endl;
		cout << "[1]. Enter a number in the range between 1000 and999999" << endl;
		cout << "[2]. Print the digits of the number" << endl;
		cout << "[3]. Count how many digits the number has" << endl;
		cout << "[4]. Return the lowest and highest digits of thenumber" << endl;
		cout << "[5]. Return the sum of the digits of the number" << endl;
		cout << "[6]. Return the product of the odd digits" << endl;
		cout << "[7]. Calculate the inverted version of the number" << endl;
		cout << "---------------------------------------------------" << endl;
		cout << "Enter option: ";
		cin >> opt;

		int cnt_n = 0, max_n = -1, min_n = 10, sum_n = 0, sum_odd = 0, i;
		switch (opt) {

		case 1:
			do {
				cout << "Enter number: ";
				cin >> n;
			} while (n <= 1000 && n >= 999999);
			break;

		case 2:
			while (n > 0) {
				cout << n % 10 << " ";
				n = n / 10;
			}
			break;

		case 3:
			while (n > 0) {
				cnt_n++;
				n = n / 10;
			}
			cout << cnt_n;
			break;

		case 4:
			while (n > 0) {
				i = n % 10;
				if (i > max_n) {
					max_n = i;
				}
				if (i < min_n) {
					min_n = i;
				}
				n = n / 10;
			}
			cout << "min = " << min_n << endl;
			cout << "max = " << max_n << endl;
			break;

		case 5:
			while (n > 0) {
				sum_n += n % 10;
				n = n / 10;
			}
			cout << sum_n;
			break;

		case 6:
			while (n > 0) {
				if ((n % 10) % 2 == 1) {
					sum_odd *= n % 10;
				}
				n = n / 10;
			}
			cout << sum_odd;
			break;

		case 7:
			while (n > 0) {
				cout << n % 10;
				n = n / 10;
			}
			break;
		}

		cout << "\nDo you want continue [Y|N]? " << endl;

		cin >> cont;
	} while (cont == 'y' || cont == 'Y');
	cout << "\n The program is over!" << endl;
	return 0;
}