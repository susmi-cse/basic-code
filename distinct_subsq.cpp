#include<bits/stdc++.h>
using namespace std;
int disub(string s, string t , int index=0, string arr = ""){
    int cont = 0 ;
    
    if(index>=s.length()){
    if(arr==t){
       return 1; 
    }
       return 0;
    }
    arr.push_back(s[index]);
    if(arr.length()<= t.length()){
    cont+=disub(s, t , index+1, arr);
    }
    arr.pop_back();
    cont+=disub(s, t , index+1 , arr);   
    
    return cont;
}
int main(){
    string s;
    string t;
    cin>>s>>t;

   cout<< disub(s,t);
}  