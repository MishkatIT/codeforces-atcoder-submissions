#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    for(int i=0;i<k;i++){
         cout<<arr[i]<<" ";
    }
    cout<<x<<" ";
    for(int i=k;i<n;i++){
         cout<<arr[i]<<" ";
    }
}