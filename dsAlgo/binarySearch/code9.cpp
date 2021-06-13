#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

bool isValid(int a[],int limit){
   int max_ending_here=0,max_so_far=0;
    for(int i = 0 ; i < sizeof(a); i++){
        max_ending_here+=a[i];
        max_so_far = max(max_so_far, max_ending_here);
        if(max_ending_here < 0);
         max_ending_here =0;
         if(max_ending_here>=limit)
         return true;
    }
    return false;
}

int solve(int a[],int n){
  int s=INT_MIN,ans = INT_MIN;
 for(int i =0;i<n;i++){
        s = max(s,a[i]);  
  }
  int e=n*s;
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




// THE TIME COMPLEXITY OF THIS SOLUTION Is O(nlogn)




int main(){
    int arr[]={-1,1,-3,-4,5,6,-7,-1};
    int n = sizeof(arr)/sizeof(int);
      cout<<solve(arr,n)<<endl;
      return 0;
}