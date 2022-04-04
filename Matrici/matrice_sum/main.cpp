#include <iostream>

using namespace std;

int sum_linii(){

   int m,n,i,j,a[20][20],s;
   cout<<"m=";cin>>m;
   cout<<"n=";cin>>n;
   for(i=1;i<=m;i++)
      for(j=1;j<=n;j++)
      {
         cout<<"a["<<i<<"]["<<j<<"]=";
         cin>>a[i][j];
      }
   cout<<"Matricea este:"<<endl;
   for(i=1;i<=m;i++)
   {
      for(j=1;j<=n;j++)
         cout<<a[i][j]<<" ";
      cout<<endl;
   }
   for(i=1;i<=m;i++)
   {
      s=0;
      for(j=1;j<=n;j++)
         s=s+a[i][j];
      cout<<"Suma elementelor de pe linia "<<i<<" este: "<<s<<endl;
   }
}

int sum_elem(){

    int i, j, m, n, M[10][10], s;
    cout << "Introduceti numarul de linii: ";
    cin >> m;
    cout << "Introduceti numarul de coloane: ";
    cin >> n;
    s = 0;
    cout << "Introduceti numerele:" <<endl;
    for(i = 0; i < m; i++)
      for(j = 0; j < n; j++){
        cout << "M[" << i << "][" << j << "]= ";
        cin >> M[i][j];
      s = s + M[i][j];
      }
   cout<<"Suma elementelor matricii este: "<<suma<<endl;

}


int main(){



}
