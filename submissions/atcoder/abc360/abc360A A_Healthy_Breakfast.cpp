#include <bits/stdc++.h>
using namespace std;
int main(){
     
     string s;
     cin>>s;
     if(s[0]=='M'){
          cout<<"No";
     }
     else{
          if(s[0]=='R'){
               cout<<"Yes";
          }
          else if(s[1]=='R'){
               cout<<"Yes";
          }
          else{
               cout<<"No";
          }
     }
}