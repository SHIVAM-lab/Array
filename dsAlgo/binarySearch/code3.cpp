#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int>a,int key){
    int l=0,e=a.size()-1,ans=0;
    while (l<e){
       int mid = e+(l-e)/2;
       if(a[mid]==key){
          return mid;
        } else if (a[mid]*a[mid]<key){
           ans=mid;
           l=mid+1;
        }else{
           e=mid-1;
     }
       
    }
    return ans;
    
}




int main(){
    vector<int>a;
      int n,x;
     cin>>n;
    for(int i = 0 ; i < n; i++){
         cin>>x,a.push_back(x);
    }
    sort(a.begin(),a.end());
    int key;
    cin>>key;
    cout<<solve(a,key)<<endl;
    return 0;
}

