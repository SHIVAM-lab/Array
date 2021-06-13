#include<algorithm>
#include<cstring>
#include<iostream>
using namespace std;

bool compare (string x, string y){
    return x+y < y+x;
}

int main(){
    string s[]={"a","abs,","tesla"};
    sort(s,s+sizeof(s),compare);
    for(auto p:s){
        cout<<s;
    }
   return 0;
}