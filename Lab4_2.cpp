#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int **P;
    int n, m;
    int i, j;
    int sum;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    P = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) P[i] = (int *)malloc(m * sizeof(int));
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            P[i][j] = rand() % 100;
            cout << P[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(i = 0; i < n; i++)
    {
        sum = 0;
        for(j = 0; j < m; j++)
            sum+= P[i][j];
        cout << "sum" << i << " = " << sum << endl;
    }
    for (i = 0; i < n; i++) free(P[i]);
    free(P);
    return 0;
}