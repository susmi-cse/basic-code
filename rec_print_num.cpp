#include <iostream>
using namespace std;

int  n;

void printname(int i, int N){

    if(i>n) return; 
    cout << i << endl;
    printname(i+1 , n);
}

int main()
{
    cin>>n;
    printname(1, n);

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int printnum( int n, int i){
    // if(i==n){return n;}
    // cout << i+1<<" ";
        // return printnum(n,i+1);
            //  
    // 
// }
// int main(){
    // int n;
    // cin>> n;
    // printnum(n,0 );
// }