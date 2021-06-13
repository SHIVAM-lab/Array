#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#define intmax  1000000
using namespace std;




bool isValid(vector<int>b,int r, int limit){
    int read =0,count=1;
    for(int i = 0 , i < b.size(); i++){
        if(read + b[i] > limit){
            count++;
            read=b[i];
            if(count > r)return false;
        }else{
            read+=b[i];
        }
    }
    return true;

}


int minPages(vector<int> books, int m){
  sort(books.begin(),books.end());
  int ans= intmax, int s = books[0],e;
  for(int i = 0; i < books.size(); i++)e+=books[i];
  while (s<e){
      int mid = e+(s-e)/2;
      if(isValid(books,m,mid)){
          ans=min(ans,mid);
          e=mid-1;
      }else{
          s=mid+1;
      }
  }
  return ans;
  
}


