#include<bits/stdc++.h>
using namespace std;
int f( int n){
    if(n==1){return 1;}
    if(n==2){return 1;}
  return f(n-1) + f(n-2);
}
int main(){ int m;
    cin>>m;
    cout<< f(m);
}