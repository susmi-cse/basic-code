#include<bits/stdc++.h>
using namespace std;

string a;

string printrev(int l , int r){
   if (l>=r){
        return "yes";}
    
    if(a[l]!=a[r]){
        return "no";
    }  

    return printrev(l+1, r-1);
    }

int main(){
cin>>a;
 cout<<printrev(0,a.size()-1);
}  