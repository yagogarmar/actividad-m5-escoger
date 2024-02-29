// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include "actividad-utilities.h"

namespace utl
{
    double utilities::Add(double a, double b)
    {
        return a + b;
    }

    double utilities::Subtract(double a, double b)
    {
        return a - b;
    }

    double utilities::Multiply(double a, double b)
    {
        return a * b;
    }

    double utilities::Divide(double a, double b)
    {
        return a / b;
    }
}