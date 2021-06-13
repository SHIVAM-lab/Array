#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;

string solve(string s){
    int i = 0 , j = s.size()-1;
    while(i<=j){
         swap(s[i],s[j]);
    }
        return s;
}










int main(){
   string s[]={"shivam"};
   cout<<solve(s)<<endl;

    return 0;
}