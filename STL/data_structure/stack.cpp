#include<bits/stdc++.h>
using namespace std;

signed main(){
    stack<int> st;
    st.push(1); // push back
    cout<<st.top()<<" "; // gives top ele
     st.pop(); // removes top ele
     cout<<st.empty()<<"\n"; // gives 1 if empty;

     //code to clear stack
     while(!st.empty()){
        st.pop();
     }

}

