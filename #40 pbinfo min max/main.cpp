#include <iostream>

using namespace std;

void P(int x[], int n, int &mini,int &maxi, int &sum)
{
    int i;
    mini = x[0];
    maxi = x[0];
    sum = 0;
    for(i=0;i<n;i++){
        sum+=x[i];
        if(mini>x[i])
            mini = x[i];
        if(maxi<x[i])
            maxi = x[i];
    }
}
