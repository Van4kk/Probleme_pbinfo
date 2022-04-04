#include <iostream>

using namespace std;

int interval(int a[], int n)
{
    int mic,mare,nr=0,i;
    if(a[0]<a[n-1]){
        mic=a[0];
        mare=a[n-1];
    }
    else{
        mic=a[n-1];
        mare=a[0];
    }
    for(i=0;i<n;i++){
        if(a[i]>=mic && a[i]<=mare)
            nr++;
        return nr;

    }

}
