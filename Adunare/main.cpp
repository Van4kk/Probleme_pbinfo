#include <iostream>


using namespace std;

int f(int n,int x){
if(n!=0){
x=x+1;
return f(n-1,x)-x;
}
return 0;
}
