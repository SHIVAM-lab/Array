#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
using namespace std;



bool solve(string s1,string s2,int s,int l){
    if(s>l)return true;
    else if( s1 == s2)return true;
    else if(l-s==1 && s1==s2)return true;
    else if(l-s==1 && s1!=s2) return false;
    else{
        int mid = l + (s-l)/2;
        string a1 = s1.substr(s,mid-s+1);
        string a2 = s1.substr(mid+1,e-mid);
        string b1 = s1.substr(s,mid-s+1);
        string b2 = s1.substr(mid+1,e-mid);
        return (( solve(a1,a2,s,s+a1.size()) && solve(b1,b2,s,s+a1.size())) || ( solve(a1,b2,s,s+a1.size()) && solve(b1,b2,s,s+a1.size()) ));
        
       }
}







int main(){
    string a,b;
    cin>>a,b;
    if(solve(a,b,0,a.size()))
    cout<<"ARE EQUIVALENT";
    else
    cout<<"NOT EQUIVALENT";
    return 0;
}