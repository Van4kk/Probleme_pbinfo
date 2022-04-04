#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,P=0,i,x;
    ifstream f("maximpar.in");
    ofstream g("maximpar.out");
    f>>n;
    n++;
    while(f>>x){
        if(x%2!=0)
           n--;
        else{
            if(x>P){
              P=x;
              n--;
            }
            if(x<P)
                n--;
         }
    }
    if(P==0)
        g<<-1;
        else
    g<<P<<" "<<n;
}
