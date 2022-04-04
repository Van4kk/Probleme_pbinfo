#include <iostream>

using namespace std;

int sterge (int v[], int &n, int i, int j)
{
    int k;
    for(k=0;k<=n-j-1;k++){
        v[i+k] = v[j+k+1];
    }
    n = n-j+i-1;
}
