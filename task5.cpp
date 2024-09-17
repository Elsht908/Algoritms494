#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int  coating, material, services, floors;
    float cost, plot, t;

    cout << "Enter type of coating, with a roof(1), without a roof(2), with a garden(3): \t";
    cin >> coating;
    cout << "Enter type of material, hight quality(1), average quality(2), other material(3): \t";
    cin >> material;
    cout << "Enter availability of basic services, yes(1), no(0): \t";
    cin >> services;
    cout << "Enter number of floors: \t";
    cin >> floors;
    cout << "Enter plot area(m^2): \t";
    cin >> plot;

    cost = 0;
    if (coating == 1) {
        cost += 5000;
    }
    else if (coating == 2) {
        cost += 3000;
    }
    else {
        cost += 1000;
    }

    if (material == 1) {
        cost *= 1.15;
    }
    else if (material == 2) {
        cost *= 1.1;
    }
    else {
        cost *= 1.05;
    }

    if (services == 1) {
        cost += 2500;
    }

    if (floors == 2) {
        cost *= 1.1;
    }
    else if (floors == 3 or floors == 4) {
        cost *= 1.15;
    }
    else if (floors > 4) {
        cost *= 1.2;
    }

    cost *= plot;

    cout << "The amout of tax: \t" << cost << endl;

    cin >> t;
}

