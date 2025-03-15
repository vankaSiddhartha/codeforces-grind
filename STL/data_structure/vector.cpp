#include<bits/stdc++.h>
using namespace std;
 signed main(){
   vector<int> a;
   a.assign(5,0);
   for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
   cout<<"\n";
   a.push_back(1);
   cout<<"push_back 1\n";
   for (int i = 0; i < a.size(); i++)
       cout << a[i] << " ";
   cout << "\n";
   cout<<"pop_back\n";
   a.pop_back();
      for (int i = 0; i < a.size(); i++)
       cout << a[i] << " ";

       cout<<"\n";
       int row=3,int col=3;
    vector<vector<int>> matrix(row,vector<int>(col,0));//2d vector
    vector<vector<vector<int>>> threeD(row,vector<vector<int>>(col,vector<int>(3,0)));//3d vector
 }
 