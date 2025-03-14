#include<bits/stdc++.h>
using namespace std;
/*
lower_bound(x)
lower bound application
if arr sorted
x (lb(x) - arr)
get no of ele less the x
also index that first ele >=x

upper_bound(x) - arr -> index of first element >x and no of ele <=x 
for string nlogn
for sorted arr logn
in set -> internal method .lower_bound()

*/
signed main(){
    int arr[] = {2,3,5,2,6,7,5,4,3,3,67,7};
    sort(arr,arr+12);
    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"\n";
    auto pointer = lower_bound(arr,arr+12,5);
    cout<<"lb pointer value "<<pointer<<"\n";
    cout<<"index: "<<pointer-arr<<"\n";
    cout<<"value lb(5) "<<arr[pointer-arr]<<"\n";
    cout<<"up "<<upper_bound(arr,arr+12,5)<<"\n";
    
}