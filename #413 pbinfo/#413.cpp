#include <iostream>
#include <fstream>
using namespace std;
int ok=1,i,j,n,x,y,a[101][101];

int main()
{
    ifstream f("adiacenta1.in");
    ofstream g("adiacenta1.out");
    while(f>>x){
            f>>y;
            a[x][y]=1;
            a[y][x]=1;
            if(x>y){
                if(x>n)
                   n=x;
            } else
            if(y>n)
               n=y;

    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)

            g<<a[i][j]<<" ";
            g<<endl;

}
}
