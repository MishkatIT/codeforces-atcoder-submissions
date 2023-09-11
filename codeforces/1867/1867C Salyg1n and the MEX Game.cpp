/*
    author    : MishkatIT
    created   : Monday 2023-09-11-21.55.43
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
          cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mex = 0;
        for(auto& i: v) {
          if(i == mex) mex++;
          else break;
        }
        while(true) {
          cout << mex << endl;
          int resp;
          cin >> resp;
          if(resp == -1)break;
          mex = resp;
        }
    }
    return 0;
}