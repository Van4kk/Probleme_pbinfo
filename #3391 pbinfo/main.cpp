#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,b=0,i,j,a[21];
    ifstream f("sirmaxim.in");
    ofstream g("sirmaxim.out");
    f>>n;
    if(n%2==0){
      for(i=1;i<=n;i++)
        f>>a[i];
       for(i=1;i<=n/2;i++)
         for(j=n/2+1;j<=n;j++)
            if(a[i]==a[j])
               b++;

    g<<b;
    }

}
