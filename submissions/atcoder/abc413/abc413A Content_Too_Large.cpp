#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    int s=0;
    for(auto& u:v){
        cin>>u;
        s+=u;
    }
    if(s<=m){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }
    

}
