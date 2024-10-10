#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, i, j, k, y, sum_divisors_a = 0, sum_divisors_b = 0, cnt_a = 0, cnt_b = 0, cnt = 0, sum_ct_a = 0, sum_nc_b = 1, sum_ab = 0, nod = 1;
    do {
        cout << "Enter the a: ";
        cin >> a;
        cout << "Enter the b: ";
        cin >> b;

    } while ((a < 2 || a>1000) && (b < 2 || b>1000));

    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            sum_divisors_a += i;
            cnt_a += 1;
            if (a % 2 == 1) {
                sum_ct_a = 0;
            }
            else if (i % 2 == 0) {
                    sum_ct_a *= i;  
            }
        }
    }
    for (j = 1; j <= b; j++) {
        if (b % j == 0) {
            sum_divisors_b += j;
            cnt_b += 1;
            if (j % 2 == 0) {
                sum_nc_b *= j;
            }
        }
    }
    for (k = 1; k <= min(b, a); k++) {
        bool isPrime = true;
        for (y = 2; y <= k / 2; y++) {
            if (k % y == 0) {
                isPrime = false;
                break;
            }
            if (a % k == 0 && b % k == 0 and isPrime == true) {
                nod *= k;
            }
        }

    }
    cout << "\nSum of divisors : " << sum_divisors_a + sum_divisors_b << endl;
    cout << "\nProduct of the number of divisors a and b: " << cnt_a * cnt_b << endl;
    cout << "\nThe sum of the product of odd divisors of number a by the sum of even divisors of number b : " << sum_ct_a + sum_nc_b << endl;
    if (nod > 1) {
        cout << "\nCalculate the greatest common divisor of a and b : " << nod << endl;
    }
    else {
        cout << "\nCo-prime numbers  " << endl;
    }

    return 0;
}