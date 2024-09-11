#include<iostream>
using namespace std; 

 int n ;

int printfactorial(int N){
    if(N==1) return 1;
    return N*printfactorial(N-1);
}

int main(){
    
    cin>> n;
    cout<< printfactorial(n); 
}
  