#include<bits/stdc++.h>
using namespace std;
signed main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = *max_element(arr,arr+n);
    cout<<"max ele "<<max<<"\n";
    cout<<"adress: "<<max_element(arr,arr+n)<<"\n"; //same for min_element
    reverse(arr,arr+n);
    cout<<" reverse arr: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<"\n";



}