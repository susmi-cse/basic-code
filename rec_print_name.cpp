#include <bits/stdc++.h>
using namespace std;

int n;

void printname(int i, int N){

    if(i>N){ return; }
    cout<< "susmita" << endl;
    printname(i+1 , N);
}

int main()
{
    cin>>n;
    printname(1, n);

    return 0;
}  