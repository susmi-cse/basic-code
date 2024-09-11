#include <bits/stdc++.h>
using namespace std;

int n , j= 0;
int printsum(int i,  int N){
    
    if(i>n) return j; 
    
    j=j+i;
    printsum(i+1 , n);

}

int main()
{
    cin>>n;
    cout << printsum(1, n);
    
    return 0;
}



//method 2


// #include <bits/stdc++.h>
// using namespace std;
// 
// int n  ;
// 
// void printsum(int i, int sum){
// 
    // if(i<0>){ 
    // cout<< sum;
    // return; }
    // printsum(i-1, sum+i);
// }
// 
// int main()
// {
    // cin>>n;
    // printsum(n, 0);
// 
    // return 0;
//}


 