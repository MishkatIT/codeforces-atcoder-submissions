/*
    author    : MishkatIT
    created   : Saturday 2023-10-21-21.49.32
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

        vector<bool> vis(n + 5, false);
        for (int i = 1; i <= n; i++) {
          ll x = i;
          while(true) {
            if(!vis[x]) cout << x << ' ';
            vis[x] = true;
            x *= 2;
            if(x > n) break;
          }
        }
        cout << '\n';
    }
    return 0;
}

