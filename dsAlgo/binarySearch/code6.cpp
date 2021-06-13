#include<algorithm>
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
#define INTMAX 1000000;
bool isValid(vector<int>v,int Tlimit,int k){
    int painter = 1; time = 0; 
    for (int i = 0; i < v.size; i++){
       if (time+v[i]>Tlimit)
       {
           painter++;
           time=v[i];
           if(painter>k)return false;
       }else{
           time+=v[i];
       }
       
    }
    return true;
    
}




int solve(vector<int>v,int k){
   int l = e = 0,ans = INTMAX;
   for(int i = 0; i<v.size();i++)
   e+=v[i];
   while (l<e)
   {
       int mid =  l+(l-e)/2;
       if(isValid(v,mid,k)){
           ans = max(and,min);
           e=mid-1;
       }else
        l = mid+1;
   }
   return ans;
}







int main(){
    vector<int>v;
    int k,n,a;
    for(int i = 0 ; i< n; i++){
            cin>>a,v.push_back(a);
    }
    cout<<solve(v,k)<<endl;
    return 0;
}