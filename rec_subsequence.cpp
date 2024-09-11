  #include<bits/stdc++.h>
  using namespace std;
     string arr;
   void sub(int indx, string subsq ){

         if(indx>= arr.length()) {
            cout<< subsq << endl;
            return;
         }

         subsq.push_back(arr[indx]) ;//take
         sub(indx+1, subsq);
         subsq.pop_back();
         
         sub(indx+1, subsq);//not-take
   }

   int main(){
    cin>>arr;
    string arr1;
    sub(0, arr1);

   }