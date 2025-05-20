/**
* @file: lab1Errors.cc
* @author: Cate Fleckenstein
* @date: 05/20/2025
* @brief: Corrected code for lab 1 Errors
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double disc;
    cout << "Enter the values for a, b, and c." << endl;
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        disc = sqrt(discriminant);
        double x1 = (-b + disc) / (2 * a);
        double x2 = (-b - disc) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        return 1;
    }

    return 0;
}
