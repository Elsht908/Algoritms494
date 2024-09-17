#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    float x, g, f, e, r, no = 0;
    cin >> x;
    r = 0;

    if (x > -4 and x < -1) {
        g = abs(x + 6) / (abs(x + 3) - 3);
        r = 1;
    }
    else if (x > -1 and x < 5) {
        g = sqrt(5 - x) - 2;
        f = 1;
    }
    else if (x >= 5) {
        g = log(x + 10) - 2;
        r = 1;
    }
    else {
        r = 0;
        no = 1;
        cout << "impossible to count" << endl;
    }

    if (g < -2 and r == 1) {
        f = abs(g / (1 - g));
    }
    else if (g >= -2 and g <= 1 and r == 1) {
        f = pow((g + 2), 2);
    }
    else if (g > 1) {
        cout << "impossible to count" << endl;
    }

    if (no != 1) {
        cout << "f=" << f << endl;
    }
    cin >> x;
}