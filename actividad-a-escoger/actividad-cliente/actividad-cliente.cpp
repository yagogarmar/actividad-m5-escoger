// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

#include <iostream>
#include "actividad-utilities.h"

using namespace std;
using namespace utl;

int main()
{
    double a = 7.4;
    int b = 99;

    cout << "a + b = " <<
        utilities::Add(a, b) << std::endl;
    cout << "a - b = " <<
        utilities::Subtract(a, b) << std::endl;
    cout << "a * b = " <<
        utilities::Multiply(a, b) << std::endl;
    cout << "a / b = " <<
        utilities::Divide(a, b) << std::endl;

    return 0;
}