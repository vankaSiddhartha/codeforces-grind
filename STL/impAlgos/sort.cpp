#include<bits/stdc++.h>
using namespace std;
signed main(){
    int arr[] ={12,3,5,7,7};
    int n=5;
    sort(arr,arr+n); // end argument of sort is exclusive [arr,arr+n) 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}