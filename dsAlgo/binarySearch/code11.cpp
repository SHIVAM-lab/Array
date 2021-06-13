#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int solve(int a[],int key,int n){
    int l = 0, e=n;
    while (l<e){
        int mid = e+(l-e)/2;
        if(a[mid]==key)
          return mid;
        
            if(a[l]<=key && a[mid]>=key)
              e = mid-1;
             else{
                l =mid+1;
              //another part is sorted
                 if(a[mid]>=key && a[e]>=key)
                   l=mid+1;
                   else
                   e=mid-1; 
             }
     }
    return -1;
}



int main(){
     int arr[]={10 ,2, 6, 8, 4};
     int n = sizeof(arr)/sizeof(int),key;
     cin >>key;
      cout<<solve(arr,key,n)<<endl;
      return 0;
}