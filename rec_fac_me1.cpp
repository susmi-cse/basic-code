#include <bits/stdc++.h>
using namespace std;

int n  ;

void printfac(int i, int fac){

    if(i<1){ 
        cout<<fac;
        return ; }
    printfac(i-1, fac*i);
}

int main()
{
    cin>>n;
    printfac(n, 1);

    return 0;
}