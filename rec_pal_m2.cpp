#include<bits/stdc++.h>
using namespace std;

string a;

void printrev(int i){
   if(i>=a.size()/2){
            return;}

            swap(a[i],a[a.size()-1]);
           printrev( i+1);
}

int main(){
    cin>>a;
    string a1=a;
     printrev(0);
     if (a1==a){
        cout<<"yes";
     }
     else{cout<<"no";}
} 