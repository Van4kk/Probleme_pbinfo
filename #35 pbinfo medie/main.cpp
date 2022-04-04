#include <iostream>

using namespace std;

int count(double a[], int n)
{
    int i,nr=0;
    double medie=0;
    for(i=0;i<n;i++){
        medie=+a[i];
    }
    medie/=n;
    for(i=0;i<n;i++){
        if(medie<=a[i])
            nr++;
    }
    return nr++;
}
