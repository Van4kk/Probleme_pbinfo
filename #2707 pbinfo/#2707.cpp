#include <iostream>

using namespace std;

int main()
{

    int ok=1,i,j,n,a[101][101];
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            if(i==j)
                if(a[i][j]!=0)
                    ok=0;
                if(a[i][j]!=a[j][i])
                    ok=0;
                if(a[i][j]!=1 && a[i][j]!=0)
                    ok=0;
        }
    cout<<ok;
}
