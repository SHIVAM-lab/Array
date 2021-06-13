
#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>arr,int n,int key){
    int l=0, e=n-1 ;
    while (l<e){
     int mid =  (l+e)/2;
     if(arr[mid]==key)
         return mid; //THERE WILL BE 4 CASES NOW
         else if(arr[l]<=arr[mid]){
             if(arr[l]<=key && arr[mid]>=key){
                e=mid-1;
                }else{
                    l=mid+1;
                }
         }else{
             if(arr[mid]<=key && arr[e]>=key){
                 l=mid+1;
             }else{
                 e=mid-1;
             }
         }
    
    }
     
    return -1;

}



int main(){
    int n,a,key;
    cin>>n;
   vector<int> arr;
    for(int i = 0; i < n; i++){
        cin>>a,arr.push_back(a);
    }
    cin>>key;
    cout<<solve(arr,n,key)<<endl;
    return 0;
}