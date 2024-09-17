#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main() {
    int k, w, g;
    float f0, t;

    cin >> k;
    cin >> w;
    f0 = asin(1 / k);
    t = (PI / 2 - f0) / w;

    cout << t << " ";

    cin >> g;
}