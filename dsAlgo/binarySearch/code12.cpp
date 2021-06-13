#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;


bool isValid(vector<int>a,int d , int c){
 int last_cow =0 , int count =0, distance = 0;
   for (int i = 1; i < a.size(); i++)
   {
       while (distance+a[i]<=d){
            distance+=a[i];
       }
           last_cow=i;
           count++;
    }
   
    if(count=d)
     return true;
          return false;
}








int solve(vector<int>a,int c){
    sort(a.begin(),a.end());
    int l = 0, e = *a.end()-a[0],ans = INT_MIN;
      while (l<e){
          int mid = e + (l-e)/2;
          if(isValid(a,mid,c)){
            ans=max(ans,mid);
             l=mid+1;
          }else
            e = mid-1;
      }
      return ans;
}











int main(){
     vector<int>arr={10 ,2, 6, 8, 4};
       int c;
     cin >>c;
      cout<<solve(arr,c)<<endl;
      return 0;
}