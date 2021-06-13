#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossibleMin(vector<int>,int,int);
int findSeperation(vector<int>,int,int);



bool isPossibleMin(vector<int>I,int c,int value){
    int count = 1, lastcow = I[0];
    for(int i =1; i < I.size(); i++){
        if (I[i]-lastcow<=value)
        {
            lastcow=I[i];
            count++;
            if(count==c)
            return true;
        }
        
    }
    return false;
    
}


int findSeperation(vector<int>I,int c , int n){
    int l =0 , e= &I[n-1]-&I[0],ans=0;
    while (l<e){
        int mid = e+(l-e)/2;
       if(isPossibleMin(I,c,mid)){
         ans=mid;
         l=mid+1;
       }else{
           e=mid-1;
       }
    }
    return ans;
}


int main(){
    vector<int>I;
    int n,c,x;
    for(int i = 0 ; i < n; i++){
          cin>>x , I.push_back(x);
    }
    sort(I.begin(),I.end());
    cin>>c;
     cout<<findSeperation(I,c,n);
     return 0;
}