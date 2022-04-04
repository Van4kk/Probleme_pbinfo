#include <iostream>

using namespace std;

int shift (int x[], int n)
{
    int i,nr;
    nr = x[0];
    for(i=0;i<n-1;i++){
        x[i] = x[i+1];
    }
    x[n-1] = nr;
}
