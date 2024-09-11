#include<bits/stdc++.h>
using namespace std;
int f(vector<int> arr, int low, int high){
 char pivot= arr[low];
 int i = low;
 int j = high;
 while(i<j){
 while(arr[i]<=pivot && i<=high-1){i++;}
 while(arr[j]>pivot && j>=low+1){j--;}
 if(i<j){swap(arr[i], arr[j]);}
 }
 swap(pivot, arr[j]);

  return j;
}
void qs(string &arr, int low , int high){
if(low<high){
int pertition= f(arr, low, high);
qs(arr, low, pertition-1 );
qs(arr, pertition+1 , high);
}
}
int main(){
    string arr ;
     cin>> arr;
    qs(arr,0, arr.size()-1);
    cout<<arr;
}