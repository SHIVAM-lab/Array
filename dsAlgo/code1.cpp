#include<algorithm>
#include<iostream>
using namespace std;

int partition (int arr[],int s, int e){
      int i=-1,j=0, pivot=arr[e];
      for(j=s; j < e ;j++){
            if(arr[j]<pivot){
              i++;
              swap(arr[i],arr[j]);
            }
      }
      swap(arr[i+1],arr[j]);
      return i+1;
}


int quickSelect(int arr[],int s , int e,int k){
    int p = partition(arr,s,e);
    if(p==k)return arr[k];
    else if(p<k){
     return quickSelect(arr,s,p-1,k);
    }else
      return quickSelect(arr,p+1,e,k);
}


int main(){
    int arr[]={0,5,8,9,11,1,7,3},k;
    cin>>k;
    cout<<quickSelect(arr,0,sizeof(arr)-1,k);
    return k;
}