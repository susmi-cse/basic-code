#include<bits/stdc++.h>
using namespace std;
string a;
void printrev(int l , int r){
    if(l>=r){
        cout<<a;
        return;
        }
    swap(a[l], a[r]);
    printrev(l+1, r-1);
}

int main(){
cin>>a;
 printrev(0,a.size()-1);
}