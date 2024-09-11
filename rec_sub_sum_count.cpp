#include<bits/stdc++.h>
using namespace std;
   string arr;
   int need;
int sub(int indx , int sum , int neededsum){
       if(sum>neededsum){return 0;}  // to reduce time complexity ,only when the array will not contain any negative digit
       if(indx>= arr.length()){
            if(sum==neededsum){
                return 1;
            }
            return 0;
       }
      //  subsq.push_back(arr[indx]) ;
       sum+=arr[indx] - '0';
    int take = sub(indx+1 , sum , neededsum );
      //  subsq.pop_back();
       sum-=arr[indx] - '0';
    int not_take = sub(indx+1 , sum ,neededsum );
    return take+ not_take;
 }
 int main(){
  cin>>arr;
  cin>>need;
  cout<<sub(0, 0 , need );
 }   