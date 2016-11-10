#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main ()
{
    double sum = 0;
    double e = 1e-4;
    double si;
    int k = 1;
    int sign = 1;

    do
    {
        k++;
        si = 1. / (sqrt(k)*pow(k,3));
        sum += sign*si;
        sign *= -1;
    }
    while(si >= e);
    cout << "sum = " << sum << endl << "k = " << k << endl;
    return 0;
}