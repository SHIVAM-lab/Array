#include<iostream>
#include<vector>
#include<algoithm>

using namespace std;

















int main (){
vector<int>c;
  int a,n,key;
 for(int i = 0; i < n; i++){
   cin>>a , c.push_back(a);
 }
 cout<<solve(c,key)<<endl;
 return 0;
}