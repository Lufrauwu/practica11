// MathClient.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "MathLibrary.h"
using namespace std;

int main()
{
    double a = 7.4;
    int b = 99;

    cout << "a + b = " <<
        MathLibrary::Arithmetic::Add(a, b) << endl;
    cout << "a - b = " <<
        MathLibrary::Arithmetic::Subtract(a, b) << endl;
    cout << "a * b = " <<
        MathLibrary::Arithmetic::Multiply(a, b) <<endl;
    cout << "a / b = " <<
        MathLibrary::Arithmetic::Divide(a, b) << endl;

    return 0;
}
