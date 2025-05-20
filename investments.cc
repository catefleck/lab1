/**
 *   @file: investments.cc
 * @author: Cate Fleckenstein
 *   @date: 05/20/2025
 *  @brief: This C++ program takes the investment amount, interest,
 * and number of years to calculate the future value of your investment.
 * */


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double value = pow(2, 5);
double amount = 0;
double interest = 0;
double timePeriod = 0;
double futureValue = 0;

int main() {
    // Get inputs
cout << "Enter the investent ammount, the interest, and the number of years: ";
cin >> amount >> interest >> timePeriod;
cout << endl;

    // Calculate outputs
interest = interest / 100;
futureValue = amount * pow(1 + interest, timePeriod);

    // Outputs
cout << fixed << setprecision(2);
cout << "Investment Amount: $" << amount << endl;
cout << "Interest: "<< interest * 100 << "%" << endl;
cout << "Number of years: " << timePeriod << endl;
cout << "Future Value: $" << futureValue << endl;
return 0;
}
