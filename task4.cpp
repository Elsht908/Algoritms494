#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    char product, klient;
    float prise, prise1, prise2;
    int i, n, i1, n1;

    cout << "Enter type of product (A, B, C): \t";
    cin >> product;
    cout << "Enter type of client(best, good, ok, bad): \t";
    cin >> klient;
    cout << "Enter the price of the product: \t";
    cin >> prise;

    if (klient == 'best' or klient == 'good') {
        cout << "Payment options: cash, card, credit \t";
    }
    if (klient == 'ok') {
        cout << "Payment options: cash, card \t";
    }
    if (klient == 'bed') {
        cout << "Payment options: cash \t";
    }

    if (product == 'C' and klient == 'bad') {
        prise *= 1.1;
        cout << "First prise:" << prise << endl;
    }
    else if (product == 'B' and klient == 'bad') {
        prise *= 1.05;
        cout << "First prise:" << prise << endl;
    }
    else if ((product == 'A' and klient == 'bad') or (product == 'C' and klient == 'ok')) {
        prise *= 1;
        cout << "First prise:" << prise << endl;
    }
    else if ((product == 'A' and klient == 'ok') or (product == 'B' and klient == 'good') or (product == 'C' and klient == 'best')) {
        prise *= 0.8;
        cout << "First prise:" << prise << endl;
    }
    else if ((product == 'A' and klient == 'good') or (product == 'C' and klient == 'best')) {
        prise *= 0.7;
        cout << "First prise:" << prise << endl;
    }
    else if (product == 'A' and klient == 'best') {
        prise *= 0.6;
        cout << "First prise:" << prise << endl;
    }

    if (klient == 'bed') {
        cout << "Finish prise :" << prise << endl;
    }
    if (klient == 'ok') {
        cout << "Choose a bid (3% or 5%): \t";
        cin >> i;
        cout << "Enter the number of contributions: \t";
        cin >> n;
        prise1 = prise * (1 + (i * n / 100));
        cout << "Payment by cash:" << prise << endl;
        cout << "Payment by card:" << prise1 << endl;
    }
    if (klient == 'best' or klient == 'good') {
        cout << "Choose the interest rate for card payment (3% or 5%): \t";
        cin >> i;
        cout << "Enter the number of card payment: \t";
        cin >> n;
        cout << "Choose the loan interest rate (2% or 5%): \t";
        cin >> i1;
        cout << "Enter the number of rate payment(1-6): \t";
        cin >> n1;
        prise1 = prise * (1 + (i * n / 100));
        prise2 = prise * pow((1 + i1 / 100), n1);
        cout << "Payment by cash:" << prise << endl;
        cout << "Payment by card:" << prise1 << endl;
        cout << "Payment by rate:" << prise2 << endl;
    }
    for (;;) {

    }
}
