#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& u:v){
        cin>>u;
    }
    int k;
    cin>>k;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]>=k){
            cnt++;
        }
    }
    cout<<cnt;

}
