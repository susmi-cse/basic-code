#include<bits/stdc++.h>
using namespace std;

string a;

void printrev(int i){
   if(i>=a.size()/2){
            cout<<a;
            return;}
            swap(a[i],a[a.size()-1]);
           printrev( i+1);
}
int main(){
    cin>>a;
     printrev(0);
}