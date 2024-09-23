#include <iostream>
#include <string>
using namespace std;

int main() {
    float h, v, a, t, g, x, y, l;

    cin >> h;
    cin >> v;
    cin >> a;
    
    if ( (1 + (2 * g * h / (v * pow(v, 2) * pow(sin(a), 2)))) > 0) {
        g = 9.8;
        t = v * sin(a) * (1 + sqrt(1 + (2 * g * h / (v * pow(v, 2) * pow(sin(a), 2))))) / g;
        x = v * t * cos(a);
        y = h + v * t * sin(a) - 0.5 * g * pow(t, 2);
    }
    

    if (x < 0) {
        x = 0;
    }
    if (y < 0) {
        y = 0;
    }
    cout << "x=" << x << endl;

    cout << "y=" << y << endl;
    cin >> l;
}
