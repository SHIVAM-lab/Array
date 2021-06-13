#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(vector<int>a,int k,vector<pair<int,int>>v){
    int i =0 ,j=0, cs = 0,vector<pair<int,int>>a;
    while(j<sizeof(a)){
          
              cs+=a[j];
              j++;
          
          while (cs>k && i < j)
          {
              cs-=a[i];
              i++;
          }
          if(cs==k){
                v.push_back({i,j-1});
          }
    }
    return ;
}








int main(){

  std::vector<int>a={10 ,2, 6, 8, 4};
      int k;
     cin >>k;
    vector<pair<int,int>>v ;
       solve(a,k,v);
    for(int i = 0 ; i< v.size(); i++){
        cout<<v[i].first <<" "<< v[i].second<<endl;
    }
    return 0;
}