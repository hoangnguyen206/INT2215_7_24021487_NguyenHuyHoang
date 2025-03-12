#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;

double mySin(double x);
double myCos(double x);
double mySqrt(double x);

double myCos(double x) 
{
    double result = 0.0;
    double term = 1.0;
    for (int i = 0; i < 10; i++) {
        result += term;
        term *= -x * x / ((2 * i + 2) * (2 * i + 1));
    }
    return result;
}

double mySin(double x)
{
    double result = 0.0;
    double term = x;
    for (int i = 0; i < 10; i++) {
        result += term;
        term *= -x * x / ((2 * i + 3) * (2 * i + 2));
    }
    return result;
}

double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }
    double result = x;
    for (int i = 0; i < 10; i++) {
        result = 0.5 * (result + x / result);
    }
    return result;
}
