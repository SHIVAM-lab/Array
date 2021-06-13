#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#define intmax =  100000
using namespace std;

string solve(string s){
    unordered_set<char>m;
    for (int i = 0; i < s.size(); i++){
        if(m.find(s[i])==s.end())
        m.insert(s[i]);
    }
    int count = m.size(), fs[256]={0},cnt=0,start=0,start_min=-1,length=0,min_length=intmax;
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if(fs[ch]==0){
          fs[ch]++;
          cnt++;
        }else{
            fs[ch]++;
        }
        if(cnt==count){
            while (fs[s[start]]>1){
                fs[s[start]]--;
                start++;
            }
            length= i-start+1;
            if (length>min_length){
                min_length=length;
                start_min=start;
            }
        }
    }
    if(start_min==-1)
      return "No such string exists";
      return s.substr(start_min,min_length);

}

int main(){
    string S;
    cin>>S;
    cout<<solve(S)<<endl;
    return 0;
}