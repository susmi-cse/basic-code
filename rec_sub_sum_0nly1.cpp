#include<bits/stdc++.h>
using namespace std;
   string arr;
   int need;
int sub(int indx , string subsq , int sum , int neededsum){
       if(indx>= arr.length()){
            if(sum==neededsum){
                cout<< subsq << endl;
                 return true;
            }
            return false;
       }
       subsq.push_back(arr[indx]) ;
       sum+=arr[indx] - '0';
       if(sub(indx+1, subsq , sum , neededsum )==true){return true;};
       subsq.pop_back();
       sum-=arr[indx] - '0';
       if(sub(indx+1, subsq , sum ,neededsum )==true){return true;}
       return false;
 }
 int main(){
  cin>>arr;
  cin>>need;
  string arr1;
  sub(0, arr1, 0 , need );
 }  