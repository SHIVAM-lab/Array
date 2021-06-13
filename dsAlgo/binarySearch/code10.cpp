#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


bool isValid(int a[],int m){
    bool flag = false;
    int i = 0;
    while(a[i]<=m && i < sizeof(a)){
        i++,flag=true;
    }
    return flag;
}

int solve(int a[],int n, int m){
 int ans = INT_MIN, s = 0, e= m/2;
   while(s<e){
       int mid = s+(s-e)/2;
       if(isValid(a,mid)){
           ans=max(ans,mid);
           s=mid+1;
       }
       else{
           e=mid-1;
       }
   }
return ans;
}



int main(){
     int arr[]={10 ,2, 6, 8, 4};
     int n = sizeof(arr)/sizeof(int),m;
     cin >> m;
      cout<<solve(arr,n,m)<<endl;
      return 0;
}