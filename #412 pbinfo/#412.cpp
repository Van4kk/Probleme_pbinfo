#include <iostream>
#include <fstream>
using namespace std;
int ok=1,i,j,n,x,y,m,a[101][101];

int main()
{
    ifstream f("adiacenta.in");
    ofstream g("adiacenta.out");
    f>>n;
    f>>m;
    for(i=1;i<=m;i++){
            f>>x>>y;
            a[x][y]=1;
            a[y][x]=1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)

            g<<a[i][j]<<" ";
            g<<endl;

}
}
