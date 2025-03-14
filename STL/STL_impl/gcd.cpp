#include<bits/stdc++.h>
using namespace std;
// tc log(min(a,b));
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);

}
signed main(){
  cout<<"gcd of 10 20 "<<gcd(10,20)<<"\n";
}
