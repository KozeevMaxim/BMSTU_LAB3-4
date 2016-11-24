#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int *P;
    int size;
    int i, imax = 0, imin = 0;
    cout << "Size = ";
    cin >> size;
    P = (int *)malloc(size * sizeof(int));
    for(i = 0; i < size; i++)
    {
        P[i] = rand() % 100;
        cout << P[i] << ' ';
    }
    cout << endl;

    for(i = 0; i < size; i++)
    {
        if(P[i] > P[imax]) imax = i;
        if(P[i] < P[imin]) imin = i;
    }
    cout << "imin = " << imin << endl;
    cout << "imax = " << imax << endl;
    free(P);
    return 0;
}