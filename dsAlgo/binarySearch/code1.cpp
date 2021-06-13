#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<cstring>

using namespace std;
// char *solve(string, char);

// char *solve(string *str, char param){
//    static char *input = NULL;
//     if(str!=NULL){
//         input=NULL;
//     }else
//       return NULL;
//       input = str;
//       char *token = new char[strlen(str)+1];
//       int i = 0;
//       for(; i < '\0'; i++){
//           if(input[i]!=param)
//           token[i]=str[i];
//           else{
//               token[i]='\0';
//               input = input + i + 1;
//                   return token;
//              }
//       }
//       token[i]='\0';
//       input=NULL;
//       return token;
// }


// //three params 
// // key , the column no.
// //type of comparison lexiographic or numeric
// //ture or false , weather to reverse the sort or not

// int main(){
  
//   int n;
//   cin>> n;
//  vector<string>s,q;
//   while(n--){
//      char p[1000];
//      cin.getline(p,1000);
//      s.push_back(p);
//   }
//  int a;
//  string b,c;
//    vector<pair<char*,string>>g;
//    for(int i = 0 ;i < s.size(); i++){
//    if (a==1)
//    {
//        g.push_back({solve(s[i],'-'),s[i]});
//    }else{
//        char *token = solve{s[i],'-'};
//    }
//    }
//   char *token = solve(s,' ');
//   while(token!=NULL){
//       cout<<token<<endl;
//       token = solve(nullptr,' ');
//   }
//   return 0;

  
// }

// this soln have time complexity of O(n)
// bool solve(char * s, char * p){
//     int i = strlen(s)-1, j=strlen(p)-1;
//     while(i!=-1 || j!=-1){
//         if(s[i]==p[j]){
//             i--,j--;
//         }else{
//             while (s[i]!=p[j]){
//                 j--;
//             }
            
//         }
//     }
//     if(j==-1)
//     return true;
//     else 
//     return false;
// }

// string compressString(const string &str){   
//     //complete the function to return output string
//        int j = 0 ,count = 0;
//        string s = nullptr;
//     for(int i = 0 ; i < str.size() || j < str.size(); i++){
//         s.push_back(str[i]),j++;
//         while(s[i]==s[j]){
//             j++,count++;
//         }
//         std::string s = std::to_string(count);
//        char  const *pchar = s.c_str();
//         s.push_back(pchar);
//         i=j;
//         count=0;
//     }
//      if(s.size()<str.size())
//         return s;
//      return str;
       
// }


int main(){
    // char s[1000],p[1000];
    // cin.getline(s,1000);
    // cin.getline(p,1000);
    // if(solve(s,p))
    //   cout<<"YES";
    //   else
    //   cout<<"NO";
      return 0;
}