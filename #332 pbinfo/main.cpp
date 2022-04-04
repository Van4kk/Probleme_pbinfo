#include <iostream>

using namespace std;

int main()
{
    int n,s=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
        s=s+i*(i+1);

    cout<<"Numarul este "<<s;
}
