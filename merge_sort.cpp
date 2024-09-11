#include<bits/stdc++.h>
using namespace std;
string arr;
     
void merge(string &arr , int low , int mid , int high){
    string temp;
    int left = low ;
    int right = mid+1 ;
    while (left<=mid && right<=high)
    {
        if (arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{ temp.push_back(arr[right]);
            right++;}
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
     while (right<=high)
    {
        { temp.push_back(arr[right]);
        right++;}   
    }
    
    for (size_t i = low; i <= high; i++)
{
  arr[i] = temp[i - low] ;
}
    
    
    
    return;
}
void ms(string &arr, int low , int high ){
    if (low==high) { return ;}
    int mid = (low+high)/2;
    ms(arr , low, mid);
    ms(arr , mid+1, high); 
    merge(arr, low, mid, high);
}

int main(){
    cin>> arr;
    ms(arr, 0, arr.size()-1);
    cout<<arr;
}

