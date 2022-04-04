#include <iostream>

using namespace std;

int main()
{
    int c=1,n,S=0,i;
    cin>>n;
    while(n>0){
        S=S+c*n;
        c++;
        n--;
    }
    cout<<"Rezultatul este "<<S;
}
