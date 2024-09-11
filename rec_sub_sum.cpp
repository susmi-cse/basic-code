#include<bits/stdc++.h>
using namespace std;
   string arr;
   int need;
 void sub(int indx , string subsq , int sum , int neededsum){
       if(indx>= arr.length()){
            if(sum==neededsum){
               for(auto it : subsq) cout<< it << " ";
               cout<< endl;
            }
            return;
       }
       subsq.push_back(arr[indx]) ;
       sum+=arr[indx] - '0';
       sub(indx+1, subsq , sum , neededsum );
       subsq.pop_back();
       sum-=arr[indx] - '0';
       sub(indx+1, subsq , sum ,neededsum );
 }
 int main(){
  cin>>arr;
  cin>>need;
  string arr1;
  sub(0, arr1, 0 , need );
 }  