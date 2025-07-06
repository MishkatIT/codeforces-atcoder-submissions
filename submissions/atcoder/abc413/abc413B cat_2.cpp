#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;
     cin>>n;
     vector<string>s(n);
     for(int i=0;i<n;i++){
         cin>>s[i];
     }
     set<string>st;
     for(int i=0;i<n;i++){
         string tat=s[i];
         for(int j=0;j<n;j++){
             if(i==j){
                 continue;
             }
             tat+=s[j];
             st.insert(tat);
             tat=s[i];
            
         }
     }
     cout<<st.size()<<'\n';
    

}
