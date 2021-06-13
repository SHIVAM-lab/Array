#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define INTMIN -1000000;
using namespace std;
bool isValid(int,int,int,int);
int solve(int,int,int,int);




int solve(int n, int m , int x ,int y){
    int l = m/x,e=n,ans =INTMIN;
    while (l<e){
        int mid = l + (l-e)/2;
        if(mid*x<=m+(n-mid)*y){
            ans = max(ans,mid);
            l=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
      int t,n,m,x,y;
      cin>>t;
      while (t--){
        cin>>n>>m>>x>>y;
        cout<<solve(n,m,x,y)<<endl;
    }
       return 0;
}