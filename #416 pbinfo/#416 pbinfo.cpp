#include <iostream>
#include <fstream>
using namespace std;
int a[101][101],i,j,n,k;
int main()
{
    ifstream f("grade.in");
    ofstream g("grade.out");
    f>>n;
    while(f>>i>>j){
        a[i][j]=1;
        a[j][i]=1;
    }
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++)
         if(a[i][j]==1)
            k++;
            g<<k<<" ";
            k=0;
    }

}
