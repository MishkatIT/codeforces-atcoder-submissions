#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     bool ok=true;
     for(int i=0;i<n-1;i++){
         if(arr[i]>=arr[i+1]){
             ok=false;
             break;
         }
     }
     if(ok==true){
         cout<<"YES"<<'\n';
     }
     else{
        cout<<"NO"<<'\n';
     }
    
}