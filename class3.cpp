#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
        cout<<"enter the value of n";
    cin>>n;
    int arr[n+1];
    for(int i= 0; i <n ; i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        int a, b;
    cin>>a>>b;
    for(int i =n; i>a; i--){
        arr[i]= arr[i-1];



    }
    arr[a] = b;
    for(int i = 0; i<=n; i++){
        cout<<arr[i]<<" ";

    }
    //delete
    
    
    int x;
    cin>>x;
    for(int i= a; i <n;i++)
{
    arr[i] = arr[i+1];


}   
 
 for(int i = 0; i<n; i++){
     cout<<arr[i]<<" ";
 }

    
        
    
    

return 0;


}