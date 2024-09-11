#include<bits/stdc++.h>
using namespace std;
void var(  int n, int arr[] ){
    for(int i=0; i<n ; i++){
        cout<< arr[i];
    }
}
int main(){
int arr[5]={5,6,8,9,1};

 var(5, *arr[0]);
}