#include<iostream>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;

string solve(string s, string p){
    int FP[256]={0},FS[256]={0},cnt=0,start=0,curr_length=0,start_min=-1,min_length=1000000;
    //freq count of char in pattern
    for (int i = 0; i < p.size(); i++){
         FP[p[i]]++;
    }
    for (int i = 0; i < s.size(); i++){
        char ch = s[i];
         if(FP[ch]!=0 || FP[ch]>=FS[ch]){
             cnt++;
         }
         if (cnt==p.size()){
             //CONTRACTION PART
           while (FP[s[start]]==0 && FP[s[start]]<=FS[s[start]]){
                  FS[s[start]]--;
                  start++;
             }
              curr_length=i-start+1;
              if(curr_length<min_length){
                     min_length=curr_length;
                     start_min=start;
              }
             
         }
         

    }

    if(start_min==-1)
        return "NO STRING PRESENT";
        return s.substr(start_min,min_length);
    
}








int main(){
    string S,P;
    cin>>S>>P;
    cout<<solve(S,P)<<endl;
    return 0;
}