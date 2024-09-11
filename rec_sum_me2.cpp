
 #include <bits/stdc++.h>
 using namespace std;
 
 int printsum(int n)
 {
 
  if(n==0){ return 0; }
  return n + printsum(n-1);             // sum=n+f(n-1) , 
 }                                      //=> sum= n +f(n-1) + f((n-1)-1) +.....+ f(0)
int main(){
    int n;
  cin>>n;
  cout<<printsum(n);
  return 0;
 }