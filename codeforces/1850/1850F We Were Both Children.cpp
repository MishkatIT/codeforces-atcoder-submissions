/*
    author    : MishkatIT
    created   : Friday 2023-07-21-21.20.30
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
        map<int, int> mp;
        int one = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x == 1) {
                one++;
                continue;
            }
            if(x <= n) {
                mp[x]++;
            }
        }
        vector<int> v(n + 10);
        int mx = 0;
        for (int i = 2; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                v[j] += mp[i];
            }
            mx = max(mx, v[i]);
        }
        cout << mx + one << '\n';
    }
    return 0;
}

