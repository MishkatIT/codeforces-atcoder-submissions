#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<s.size()<<'\n';
    while(!s.empty()){
         int da=*s.begin();
         cout<<da<<" ";
         s.erase(da);
    }

}
