#include<algorithm>
#include<iostream>
using namespace std;

float solve(int n,int p){
  float ans=0,int s=0,h=n;
  while (s<h){
      int mid=h+(s-h)/2;
      if(mid*mid==n)return mid;
      else if(mid*mid<n){
          ans=mid;
          s=mid+1;
      }else{
          h=mid-1;
      }
    } 
    float x = 0.1;
    for(int i = 0; i < p; i++){
       
           while((ans)*(ans)<n){
                 ans+=x;
           }
           ans-=x;

           x/=10.0;
    }
    return ans;
}


int main(){
    float n,p;
    cin>>n>>p;
    cout<<solve(n,p)<<endl;
    return 0;
}