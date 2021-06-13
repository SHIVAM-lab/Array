#include<iostream>
#include<algorithm>
#include<vector>
#define intmin -10000;
using namespace std;

pair<int,int> solve(int *a,int k){
    int i =0 ,j=0, cs = 0,pair<int,int>p ;
    int  ans=intmin;
    
    while(j<sizeof(a)){
         
              cs+=a[j];
              j++;
          
          while (cs>k && i < j)
          {
              cs-=a[i];
              i++;
          }
          if(cs==k && ans < j-i){
                   p.first=i;
                   p.second=j-1;
                   ans = j-1-i;
            }
    }
    return p;
}








int main(){

  int a[]={10 ,2, 6, 8, 4};
      int k;
     cin >>k;
   
       auto p=solve(a,k);
      cout<<p.second<<" "<<p.first<<endl;
    return 0;
}