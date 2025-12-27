#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin>>n;
      int state=0;
      int cnt=0;
      for(int i=0;i<n;i++){
          string s;
          cin>>s;
          if(s=="private"&&state==0){
              cnt++;
          }
          else if(s=="login"){
              state=1;
          }
          else if(s=="logout"){
              state=0;
          }
         
      }
      cout<<cnt<<'\n';


}
