#include<bits/stdc++.h>
using namespace std;

void per(string arr, int ind=0 , string result = ""){
    if(ind >= arr.length()-1){
        for(auto it: result) cout<<it <<" ";
        cout << endl;
        return;
    }
    for(int i = ind ; i<=arr.length()-1 ; i++){
        swap(arr[ind], arr[i]);
        per(arr, ind+1 , result + arr[ind] );
        swap(arr[ind], arr[i]); // backtrack
    }
}

int main() {
    string arr;
    cin >> arr;
    per(arr);
}
