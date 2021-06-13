

#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#define intmax   1000000;
using namespace std;

bool isValid(vector<int>a,int p , int Tlimit){
      int loop=1;
    for (int i = 1; i < a.size(); i++){
        int timer=0;
        while (timer<=Tlimit){
          timer+=loop*a[i];
          loop++;
        }
    }
    if(loop>=p)
     return true;
       return false;
}




int solve(vector<int>a,int c){
    sort(a.begin(),a.end());
    int l = 0, e = *a.end()-a[0],ans =intmax;
      while (l<e){
          int mid = e + (l-e)/2;
          if(isValid(a,mid,c)){
            ans=min(ans,mid);
             l=mid-1;
          }else
            e = mid+1;
      }
      return ans;
}








int main(){
     vector<int> arr={10 ,2, 6, 8, 4};
     int n = sizeof(arr)/sizeof(int),p;
     cin >>p;
      cout<<solve(arr,p)<<endl;
      return 0;
}