#include<algorithm>
#include<vector>
#include<iostream>
#include<climits>
using namespace std;

//PROBLEM EKO
#define INTMIN  -1000000
bool isValid(vector<int>v,int T,int H){
     int stock = 0;
     for(int i = 0; i < v.size(); i++){
         if(stock>=H)return true;
         if(v[i]>=H){
             stock+=v[i]-H;
         }
     }
    if(stock>=H)return true;
    return false;
}





int solve(vector<int>v,int T){
    int l= 0, e=*v.end(),ans = INTMIN;
    while (l<e){
        int mid = l + (l-e)/2;
        if(isValid(v,T,mid)){
            ans = max(ans,mid);
            l = mid+1;
        }else{
            e = mid-1;
        }
    }
    return ans;
}





int main(){
    vector<int>v;
    int n,T,t,a;
    while (t--){
        for (int i = 0; i < n; i++){
            cin>>a, v.push_back(a);
        }
        cout<<solve(v,T)<<endl;
        
    }
    return 0;
    
}