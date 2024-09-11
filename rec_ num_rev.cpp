#include <bits/stdc++.h>
using namespace std;

int n;

void printnum(int i, int n){

    if(i<n){ return; }
    cout<< n << endl;
    printnum(i-1 , n);
}

int main()
{
    cin>>n;
    printnum(n, n);

    return 0;
}

